using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomPropertyDrawer(typeof(ConditionalShowAttribute))]
public class ConditionalShowPropertyDrawer : PropertyDrawer
{

    public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
    {
        
        ConditionalShowAttribute condHAtt = (ConditionalShowAttribute)attribute;
        
        bool enabled = GetConditionalShowAttributeResult(condHAtt, property) == true;        

        if (enabled)
        {
            EditorGUI.PropertyField(position, property, label, true);
        }        
    }

    public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
    {
        ConditionalShowAttribute condHAtt = (ConditionalShowAttribute)attribute;
        bool enabled = GetConditionalShowAttributeResult(condHAtt, property) == true;

        if (enabled)
        {
            return EditorGUI.GetPropertyHeight(property, label);
        }
        //We want to undo the spacing added before and after the property
        return -EditorGUIUtility.standardVerticalSpacing;

    }

    bool GetConditionalShowAttributeResult(ConditionalShowAttribute condHAtt, SerializedProperty property)
    {
        SerializedProperty sourcePropertyValue = null;

        //Get the full relative property path of the sourcefield so we can have nested hiding.Use old method when dealing with arrays
        if (!property.isArray)
        {
            string propertyPath = property.propertyPath; //returns the property path of the property we want to apply the attribute to
            string conditionPath = propertyPath.Replace(property.name, condHAtt.conditionalSourceField); //changes the path to the conditionalsource property path
            sourcePropertyValue = property.serializedObject.FindProperty(conditionPath);

            //if the find failed->fall back to the old system
            if (sourcePropertyValue == null)
            {
                //original implementation (doens't work with nested serializedObjects)
                sourcePropertyValue = property.serializedObject.FindProperty(condHAtt.conditionalSourceField);
            }
        }
        else
        {
            //original implementation (doens't work with nested serializedObjects)
            sourcePropertyValue = property.serializedObject.FindProperty(condHAtt.conditionalSourceField);
        }


        if (sourcePropertyValue != null)
        {
            return CheckPropertyType(condHAtt,sourcePropertyValue);         
        }

        return true;
    }

    bool CheckPropertyType(ConditionalShowAttribute condHAtt, SerializedProperty sourcePropertyValue)
    {
        //Note: add others for custom handling if desired
        switch (sourcePropertyValue.propertyType)
        {                              
            case SerializedPropertyType.Enum:
                return sourcePropertyValue.enumValueIndex == condHAtt.enumIndex;
            default:
                Debug.LogError("Data type of the property used for conditional hiding [" + sourcePropertyValue.propertyType + "] is currently not supported");
                return true;
        }
    }
}
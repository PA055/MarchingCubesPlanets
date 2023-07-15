using System.Collections;
using System;
using UnityEngine;

[AttributeUsage(AttributeTargets.Field | AttributeTargets.Property |
    AttributeTargets.Class | AttributeTargets.Struct, Inherited = true)]
public class ConditionalHideAttribute : PropertyAttribute
{
    public string conditionalSourceField;
    public bool showIfTrue;
    public int enumIndex;

    public ConditionalHideAttribute(string boolVariableName, bool showIfTrue)
    {
        conditionalSourceField = boolVariableName;
        this.showIfTrue = showIfTrue;
    }

    public ConditionalHideAttribute(string enumVariableName, int enumIndex)
    {
        conditionalSourceField = enumVariableName;
        this.enumIndex = enumIndex;
    }
}


[AttributeUsage(AttributeTargets.Field | AttributeTargets.Property |
    AttributeTargets.Class | AttributeTargets.Struct, Inherited = true)]
public class ConditionalShowAttribute : PropertyAttribute
{
    public string conditionalSourceField;
    public int enumIndex;

    public ConditionalShowAttribute(string enumVariableName, int enumIndex)
    {
        conditionalSourceField = enumVariableName;
        this.enumIndex = enumIndex;
    }
}
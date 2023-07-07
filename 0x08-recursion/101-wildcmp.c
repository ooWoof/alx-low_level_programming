#include "main.h"

/**
 * wildcmp - Compares two strings and determines if they can be considered identical.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
    {
        return 1; // Base case: Both strings are empty, considered identical
    }
    else if (*s2 == '*')
    {
        if (*s1 == '\0' && *(s2 + 1) == '\0')
        {
            return 1; // Base case: s2 contains only '*', considered identical to any string
        }
        else if (*s1 != '\0')
        {
            return wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1); // Recursive cases: '*' matches either the current character or an empty string
        }
    }
    else if (*s1 == *s2)
    {
        return wildcmp(s1 + 1, s2 + 1); // Recursive case: Characters match, continue comparing the rest of the strings
    }

    return 0; // Base case: Characters don't match, strings are not identical
}


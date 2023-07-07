#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int len = _strlen(s);
    return is_palindrome_helper(s, 0, len - 1);
}

/**
 * is_palindrome_helper - Recursive helper function to check if a string is a palindrome.
 * @s: The string to be checked.
 * @start: The starting index of the current comparison.
 * @end: The ending index of the current comparison.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
    if (start >= end)
    {
        return 1; // Base case: All characters have been compared
    }
    else if (s[start] != s[end])
    {
        return 0; // Base case: Mismatch of characters, not a palindrome
    }
    else
    {
        return is_palindrome_helper(s, start + 1, end - 1); // Recursively check the next pair of characters
    }
}

/**
 * _strlen - Calculates the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    return len;
}


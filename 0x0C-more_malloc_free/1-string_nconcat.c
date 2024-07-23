#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings while
 * second string is an n value
 *
 * @s1: string one
 * @s2: string two
 * @n: no of element to concatenate from s2
 *
 * Return: pointer to the new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    size_t len1, len2, idx;
    char *result;

    if (s1 == NULL)
        len1 = 0;
    else
    {
        for (len1 = 0; s1[len1] != '\0'; len1++)
            ;
    }

    if (s2 == NULL)
        len2 = 0;
    else
    {
        for (len2 = 0; s2[len2] != '\0'; len2++)
            ;
    }
    if (len2 > n)
        len2 = n;
    result = malloc(sizeof(char) * (len1 + len2 + 1));
    if (result == NULL)
        return (NULL);
    for (idx = 0; idx < len1; idx++)
        result[idx] = s1[idx];
    for (idx = 0; idx < len2; idx++)
        result[idx + len1] = s2[idx];
    result[len1 + len2] = '\0';
    return (result);
}

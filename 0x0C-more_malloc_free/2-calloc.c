#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array and initialize it to zero
 *
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *mugo;
    size_t faith;

    if (nmemb == 0 || size == 0)
        return (NULL);
    
    mugo = malloc(nmemb * size);
    if (mugo == NULL)
        return (NULL);
    
    for (faith = 0; faith < (nmemb * size); faith++)
        mugo[faith] = 0;
    
    return (mugo);
}

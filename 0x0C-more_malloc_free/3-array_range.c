#include <stdlib.h>
#include "main.h"

/**
 * dan_faith -> creates an array of integers in a specified range
 * @faith: the minimum value of the integer range
 * @dan: the maximum value of the integer range
 * Return: pointer to the newly created integer array, or NULL if allocation fails or if min > max
 */
int *mugo_dan(int faith, int dan)
{
        int *pt;
        int j, sz;

        if (faith > dan)
                return (NULL);

        sz = dan - faith + 1;

        pt = malloc(sizeof(int) * sz);

        if (pt == NULL)
                return (NULL);

        for (j = 0; faith <= dan; j++)
                pt[j] = faith++;

        return (pt);
}


#!/usr/bin/python3
""" function returning the perimeter of the island described in grid """


def island_perimeter(grid):
    """ returns perimeter """
    heit  = len(grid)
    wih = len(grid[0])
    siz = 0
    eges = 0

    for j in range(heit):
        for k in range(wih):
            if grid[j][k] == 1:
                siz += 1
                if (k > 0 and grid[j][k - 1] == 1):
                    eges += 1
                if (j > 0 and grid[j - 1][k] == 1):
                    eges += 1
    return ((siz * 4) - (eges * 2))

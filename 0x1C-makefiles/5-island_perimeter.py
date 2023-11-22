#!/usr/bin/python3
"""Module computing the perimeter of an island"""


def island_perimeter(grid):
    """island_perimeter:
    Args:
    grid(list) - list of list of integers
    Return:
    perimeter of the island described in grid
    """
    length = 0
    lines = 0

    for m in range(len(grid)):
        for n in range(len(grid[0])):
            if grid[m][n] == 1:
                length += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    lines += 1
                    if (i > 0 and grid[i - 1][j] == 1):
                        lines += 1

    return length * 4 - edges * 2

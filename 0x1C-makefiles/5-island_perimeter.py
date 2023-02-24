#!/usr/bin/python3
"""
Island Perimeter Module Doc: Defines Island Perimeter Calculator
"""


def island_perimeter(grid):
    """
    Island Perimeter Functiin Doc: Returns perimeter of island
        described in grid.

    Args:
        grid (list(list(int))): a grid of 0's and 1's
            representing water and land zones

    Returns:
        perimeter (int): the perimeter of the island
    """

    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4

                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2

                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2

    return perimeter

#!/usr/bin/python3
"""island perimeter module"""


def island_perimeter(grid):
    """returns the perimeter of an island"""
     perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4  # Each land cell contributes 4 to the perimeter
                # Check neighboring cells and reduce perimeter for each adjacent land cell
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2  # Subtract 2 if top neighbor is land
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2  # Subtract 2 if left neighbor is land

    return perimeter

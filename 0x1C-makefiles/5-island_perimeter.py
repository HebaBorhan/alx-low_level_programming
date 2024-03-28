#!/usr/bin/python3
"""island perimeter module"""


def island_perimeter(grid):
    """returns the perimeter of an island"""
    if not grid:
        return 0
    rows = len(grid)
    cols = len(grid[0])
    visited = [[False] * cols for  _ in range(rows)]
    def dfs(row, col):
        """depth first search helper function"""
        if row < 0 or row >=  rows or col < 0 or col >= cols or visited[row][col]:
            return
        visited[row][col] = True
        directions = [(1, 0),  (-1, 0), (0, 1), (0, -1)]
        for direction in directions:
            next_row, next_col =  row + direction[0], col + direction[1]
            dfs(next_row, next_col)

    count = 0

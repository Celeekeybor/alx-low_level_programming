#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):

    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for val in range(height):
        for num in range(width):
            if grid[val][num] == 1:
                size += 1
                if (num > 0 and grid[val][num - 1] == 1):
                    edges += 1
                if (val > 0 and grid[val - 1][num] == 1):
                    edges += 1
    return size * 4 - edges * 2


#!/usr/bin/python3


"""
This function calculates the perimeter of the island in a grid.

Args:
  grid: A list of lists of integers, where 0 represents water and 1
represents land.

Returns:
  The perimeter of the island as an integer.
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid (list of list of int): Represents the grid where 0 represents
    water zone and 1 represents land zone.

    Returns:
    int: The perimeter of the island.

    Raises:
    ValueError: If grid is empty or invalid.

    Example:
    >>> island_perimeter([[0, 1, 0, 0],
                          [1, 1, 1, 0],
                          [0, 1, 0, 0],
                          [1, 1, 0, 0]])
    16
    """
    rows, cols = len(grid), len(grid[0])
    perimeter = 0
    # Iterate through each cell in the grid
    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                # Check all four neighbors for water
                perimeter += 4
                if row > 0 and grid[row-1][col] == 1:
                    perimeter -= 2  # Not on the top edge
                if col > 0 and grid[row][col-1] == 1:
                    perimeter -= 2  # Not on the left edge

    return perimeter

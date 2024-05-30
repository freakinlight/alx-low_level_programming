#!/usr/bin/python3
"""Island perimeter"""

def island_perimeter(grid):
    """Calculates the perimeter of the island in the grid"""

    if not grid or not grid[0]:
        return 0

    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                perimeter += 4
                if r > 0 and grid[r - 1][c] == 1:  # Check above
                    perimeter -= 2
                if c > 0 and grid[r][c - 1] == 1:  # Check left
                    perimeter -= 2

    return perimeter



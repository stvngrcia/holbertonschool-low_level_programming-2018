#!/usr/bin/python3
def island_perimeter(grid):
    '''
        Calculates the perimeter of an island that is surrounded by water
        the Land is represented by 1 and the water is by 0.
        Aguments:
            - grid: A matrix filled with 0, 1 representing a map.
    '''
    water = 0
    land = 1
    perimeter = 0

    for y, level in enumerate(grid):
        for x, parcel in enumerate(level):
            if parcel == land:  # Checking only when hitting land
                try:
                    if grid[y][x - 1] == water:  # Looking west
                        perimeter += 1
                except IndexError:
                    perimeter += 1
                try:
                    if grid[y][x + 1] == water:  # Looking east
                        perimeter += 1
                except IndexError:
                    perimeter += 1
                if y - 1 < 0 or grid[1 - y][x] == water:  # Looking north
                    perimeter += 1
                try:
                    if grid[y + 1][x] == water:  # Looking south
                        perimeter += 1
                except IndexError:
                    perimeter += 1

    return perimeter

#!/usr/bin/python3
"""
Island Perimeter
"""


def island_perimeter(grid):
    """
    Function that returns the perimeter of the island described in grid
    """
    perimeter = 0
    filas = len(grid)
    columnas = len(grid[0])
    for fila in range(filas):
        for celda in range(columnas):
            if grid[fila][celda] == 1:
                # ask for up dir
                if fila == 0 or grid[fila - 1][celda] == 0:
                    perimeter += 1
                # ask for down dir
                if fila == filas - 1 or grid[fila + 1][celda] == 0:
                    perimeter += 1
                # ask for left land1
                if celda == 0 or grid[fila][celda - 1] == 0:
                    perimeter += 1
                # ask for right dir
                if celda == columnas - 1 or grid[fila][celda + 1] == 0:
                    perimeter += 1
    return perimeter

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
                # ask for up direction, if is first row enter and
                # add perimeter + 1 if is not the first row ask if
                # cell in up position is 0
                if fila == 0 or grid[fila - 1][celda] == 0:
                    perimeter += 1
                # ask for down direction, if is last row ask if
                # row is not out of range (filas - 1) if is not
                # the last row ask if cell in down position is 0
                if fila == filas - 1 or grid[fila + 1][celda] == 0:
                    perimeter += 1
                # ask for left direction, if is first column, enter and
                # add perimeter + 1 if is not the first row ask if
                # cell in left position is 0
                if celda == 0 or grid[fila][celda - 1] == 0:
                    perimeter += 1
                # ask for rigth direction, if is last column ask if
                # row is not out of range (columnas - 1) if is not
                # the last column ask if cell in right position is 0
                if celda == columnas - 1 or grid[fila][celda + 1] == 0:
                    perimeter += 1
    return perimeter

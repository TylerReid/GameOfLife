#include <stdlib.h>
#include <stdio.h>
#include "grid.h"

int main()
{
    int* grid = createGrid();
    for (int i = 0; i < 10; i++)
    {
        printGrid(grid);
        simulate(grid);
        printf(" \n");
    }
    free(grid);
    
    return 0;
}


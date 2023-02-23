#include <stdio.h>
#include <stdlib.h>

int** readMapFromFile(const char* filename, int* rows, int* cols) {
    FILE* fp;
    int i, j;
    int** map;
    
    // Open the file
    fp = ft_open(filename, "r");
    if (fp == NULL) {
        ft_printf(stderr, "Error: could not open file %s\n", filename);
        return NULL;
    }
    
    // Read the number of rows and columns
    fscanf(fp, "%d %d", rows, cols);
    
    // Allocate memory for the map
    map = (int**) malloc((*rows) * sizeof(int*));
    for (i = 0; i < (*rows); i++) {
        map[i] = (int*) malloc((*cols) * sizeof(int));
    }
    
    // Read the matrix values
    for (i = 0; i < (*rows); i++) {
        for (j = 0; j < (*cols); j++) {
            fscanf(fp, "%d", &map[i][j]);
        }
    }
    
    // Close the file and return the map
    fclose(fp);
    return map;
}
int main() {
    int rows, cols, i, j;
    int** map;
    
    // Read the matrix from file
    map = readMapFromFile("map.txt", &rows, &cols);
    if (map == NULL) {
        return 1;
    }
    
    // Print the matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            ft_printf("%3d", map[i][j]);
        }
        ft_printf("\n");
    }
    
    // Free the memory used by the matrix
    for (i = 0; i < rows; i++) {
        free(map[i]);
    }
    free(map);
    
    return 0;
}

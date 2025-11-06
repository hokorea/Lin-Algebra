#include "util.h"

#include <stdio.h>
#include <stdlib.h>

void print_matrix(int rows, int cols, double M[rows][cols]) {
    printf("===================\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%8.4f ", M[i][j]);
        }
        printf("\n");
    }
    printf("===================\n");
}
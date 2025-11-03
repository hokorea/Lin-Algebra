#ifndef ERO_H
#define ERO_H

// Type 1: R_i와 R_j를 교환
void swap_rows(int R, int C, double A[R][C], int i, int j);

// Type 2: R_i에 k를 곱함 (k != 0)
void scale_row(int R, int C, double A[R][C], int i, double k);

// Type 3: R_j에 (R_i * k)를 더함
void add_scaled_row(int R, int C, double A[R][C], int i, int j, double k);

#endif
#ifndef MATRIX_H
#define MATRIX_H

// 행렬 덧셈 (C = A + B). 성공 시 1, 실패(차원 불일치) 시 0 반환.
int add_matrices(int rows, int cols, double A[rows][cols], double B[rows][cols], double C[rows][cols]);

// 스칼라 곱 (C = k * A).
void scalar_multiply(int rows, int cols, double A[rows][cols], double k, double C[rows][cols]);

// 전치 행렬 (C = A^T). A는 R x C, C는 C x R.
void transpose_matrix(int rows, int cols, double A[rows][cols], double T[cols][rows]);

// 행렬 곱셈 (C = A * B). 성공 시 1, 실패(차원 조건 불만족) 시 0 반환.
int multiply_matrices(int M, int N, int P, double A[M][N], double B[N][P], double C[M][P]);

// 행렬 복사 (깊은 복사를 위한 함수)
void copy_matrix(int rows, int cols, double A[rows][cols], double B[rows][cols]);

#endif
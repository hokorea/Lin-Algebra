#include "matrix.h"

// 행렬 덧셈 (C = A + B). 성공 시 1, 실패(차원 불일치) 시 0 반환.
int add_matrices(int rows, int cols, double A[rows][cols], double B[rows][cols], double C[rows][cols]){
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            C[i][j] = A[i][j] + B[i][j];
    return 1;
}

// 스칼라 곱 (C = k * A)
void scalar_multiply(int rows, int cols, double A[rows][cols], double k, double C[rows][cols]){
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            C[i][j] = A[i][j] * k;
    return;
}

// 전치 행렬 (C = A^T). A는 R x C, C는 C x R.
void transpose_matrix(int rows, int cols, double A[rows][cols], double T[cols][rows]){
    for (int i = 0; i < rows; i++)
        for(int j = 0; j<cols; j++)
            T[i][j] = A[j][i];
    return;
}

// 행렬 곱셈 (C = A * B). 성공 시 1, 실패(차원 조건 불만족) 시 0 반환.
// OPTIMIZE: 
int multiply_matrices(int M, int N, int P, double A[M][N], double B[N][P], double C[M][P]){
    // 행렬의 곱
    for (int i = 0; i < M; i++)
        for (int j = 0; j < P; j++){
            double sum = 0.0;
            for (int k = 0; k < N; k++)
                sum += A[i][k] * B[k][j];
            C[i][j] = sum;
        }
        
    return 1;
}

void copy_matrix(int rows, int cols, double A[rows][cols], double B[rows][cols]){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            B[i][j] = A[i][j];
        }
    }
}
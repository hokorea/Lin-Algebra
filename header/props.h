#ifndef PROPS_H
#define PROPS_H

// 대칭행렬 판단
int is_symmetric(int N, double A[N][N]);

// 상삼각행렬 판단
int is_upper_triangular(int N, double A[N][N]);

// 하삼각행렬 판단
int is_lower_triangular(int N, double A[N][N]);

// 역행렬 존재 여부 판단 (비특이행렬인지 검사)
int is_invertible(int N, double A[N][N]);

#endif
#ifndef PROPS_H
#define PROPS_H

#include "util.h"

// 대칭행렬 판단
int is_symmetric(int N, double A[N][N]);

// 상삼각행렬 판단
int is_upper_triangular(int N, double A[N][N]);

// 하삼각행렬 판단
int is_lower_triangular(int N, double A[N][N]);

#endif
#ifndef UTIL_H
#define UTIL_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>   // fabs() 사용
#include <stdbool.h>

// 부동소수점 값이 0인지 판단하기 위한 임계값 (수치 안정성 고려)
#define EPSILON 1e-9

static inline bool is_zero(double x){
    return fabs(x) < EPSILON;
}
static inline bool is_equal(double a, double b){
    return fabs(a - b) < EPSILON;
}

// DEBUG: 행렬 출력을 위한 유틸리티 함수 (테스트용)
void print_matrix(int rows, int cols, double M[rows][cols]);

#endif
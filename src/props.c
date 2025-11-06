#include "props.h"

#include "util.h"
#include "gauss.h"

// 대칭행렬 판단
int is_symmetric(int N, double A[N][N]){
    for (int i = 0; i < N; i++)
        for (int j = 0; j < i; j++)
            if (!is_equal(A[i][j], A[j][i]))
                return 0;
    return 1;
}
// 상삼각행렬 판단
int is_upper_triangular(int N, double A[N][N]){
    for (int i = 0; i < N; i++)
        for (int j = 0; j < i; j++)
            if (!is_zero(A[i][j]))
                return 0;
    return 1;
}
// 하삼각행렬 판단
int is_lower_triangular(int N, double A[N][N]){
    for (int i = 0; i < N; i++)
        for (int j = 0; j < i; j++)
            if (!is_zero(A[j][i]))
                return 0;
    return 1;
}
// 역행렬 존재 여부 판단 (비특이행렬인지 검사)
int is_invertible(int N, double A[N][N]){
    return 0;
}
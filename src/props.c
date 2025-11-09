#include "props.h"

#include "util.h"
#include "matrix.h"
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
    double B[N][N];
    copy_matrix(N, N, A, B); // 원래 배열 영향을 미치지 않기 위한 깊은 복사
    to_ref(N, N, B); // 행렬식을 구하기 위한 밑작업
    for (int i = 0; i < N; i++){
        if (is_zero(B[i][i])) // 대각요소가 0인가 검사
            return 0;
    }
    return 1;
}
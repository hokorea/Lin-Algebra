#include "gauss.h"

// OPTIMIZE: 1과 가까운 수를 찾는 알고리즘 추가 시 속도 향상 예상
void to_ref(int rows, int cols, double M[rows][cols]){
    for (int i = 0; i < cols; i++){
        int max_row = i;
        double pivot = 0.0;
        for (int j = 0 + i; j < rows; j++){
            if (!is_zero(M[j][i])){
                if (pivot < M[j][i]){
                    max_row = j;
                    pivot = fabs(M[j][i]);
                }
            }
        }

        if (max_row != i){
            swap_rows(rows, cols, M, i, max_row);
            scale_row(rows, cols, M, i, 1.0 / pivot);
        }

        // for (int j = 0 + i; j < rows; j++){
        //     if (!is_zero(M[j][i])){
        //         pivot = M[j][i];
        //         scale_row(rows, cols, M, j, 1.0 / pivot);
        //         if (i != j)
        //             swap_rows(rows, cols, M, j, i);
        //         break;
        //     }
        // }
        for (int j = 0 + i + 1; j < rows; j++){
            add_scaled_row(rows, cols, M, i, j, -M[j][i]);
        }
    }
}

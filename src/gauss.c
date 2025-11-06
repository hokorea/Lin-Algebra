#include "gauss.h"

#include "util.h"
#include "ero.h"

// OPTIMIZE:
// NOTE: 부분 피벗팅 적용
void to_ref(int rows, int cols, double M[rows][cols]) {
    for (int i = 0; i < cols && i < rows; i++) {
        // --- 1. 피벗 행 선택 ---
        int max_row = i;
        double pivot = 0.0;
        for (int j = i; j < rows; j++) {
            if (fabs(M[j][i]) > pivot) {
                pivot = fabs(M[j][i]);
                max_row = j;
            }
        }
        // --- 2. 피벗 행 교환 ---
        if (max_row != i)
            swap_rows(rows, cols, M, i, max_row);
        // --- 3. 피벗 행 정규화 ---
        pivot = M[i][i];
        if (!is_zero(pivot))
            scale_row(rows, cols, M, i, 1.0 / pivot);
        // --- 4. 아래 행 소거 ---
        for (int j = i + 1; j < rows; j++) {
            double factor = M[j][i];
            if (!is_zero(factor))
                add_scaled_row(rows, cols, M, i, j, -factor);
        }
    }
}


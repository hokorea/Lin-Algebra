#include "gauss.h"

int main(void){
    double A[3][4] = {
        {0.0, 1.0, 1.0, 5.0},
        {2.0, 4.0, -2.0, 2.0},
        {4.0, 9.0, -3.0, 8.0}
    };

    to_ref(3, 4, A);
    print_matrix(3, 4, A);

    return 0;
}
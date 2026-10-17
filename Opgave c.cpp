#include <stdio.h>
// Created by idaki on 17-10-2026.
//
int main() {
    int i_temp = 4;
    for (int i = 0; i< 12; ++i) {

        if (i <= 6) {
            for (int j = 0; j <i; ++j)
            {
                printf("%d ", j);
            }
        }
        else if (i > 6) {

            for (int k = 0; k <= i_temp; ++k) {
                printf("%d ", k);

            }

            --i_temp;

        }

        printf("\n");
    }



    return 0;

}
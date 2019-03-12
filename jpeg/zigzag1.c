/*#############################################################
 *     File Name    : zigzag1.c
 *     Author       : winddoing
 *     Created Time : 2019年02月18日 星期一 14时19分04秒
 *     Description  :
 *############################################################*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int scan[8][8] = {
        {0, 1, 5, 6, 14, 15, 27, 28},
        {2, 4, 7, 13, 16, 26, 29, 42},
        {3, 8, 12, 17, 25, 30, 41, 43},
        {9, 11, 18, 24, 31, 40, 44, 53},
        {10, 19, 23, 32, 39, 45, 52, 54},
        {20, 22, 33, 38, 46, 51, 55, 60},
        {21, 34, 37, 47, 50, 56, 59, 61},
        {35, 36, 48, 49, 57, 58, 62, 63}
    };

    int b[64] = {0};
    int a[8][8] = {0};

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            a[i][j] = (int)rand() % 10000;
            printf("%5d  ", a[i][j]);
        }
        printf("\n");
    }


    printf("///////////////////////////////////////////////////////\n");

    for(int k = 0; k < 8; k++) {
        for(int n = 0; n < 8; n++) {
            *(b + scan[k][n]) = a[k][n] ;
        }
    }

    for(int m = 0; m < 64; m++) {
        printf("%5d  ", b[m]);

        if((m + 1) % 8 == 0)
            printf("\n");
    }

    return 0;
}
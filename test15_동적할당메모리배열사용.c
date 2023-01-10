#include <stdio.h>
#include <stdlib.h>

int main(){

    /* 하나의 데이터 */
    // int *ptr = NULL;

    // ptr = (int*)malloc(sizeof(int)*1);
    // if (!ptr) exit(1);

    // *ptr = 1024 * 3;
    // printf("%d\n", *ptr);

    // free(ptr);
    // ptr = NULL;

    /* 1차원 배열 */

    // int n = 3;
    // int *ptr = (int*)malloc(sizeof(int)*n);

    // if(!ptr) exit(1);

    // ptr[0] = 123;
    // *(ptr +1) = 456;
    // *(ptr +2) = 789;

    // free(ptr);
    // ptr = NULL;

    /* 2차원 배열 */
    int row = 3, col = 2;
    int(*ptr2d)[2] = (int(*)[2])malloc(sizeof(int) * row * col);
    // int(*ptr2d)[col] = (int(*)[col])malloc(sizeof(int) * row * col);    //VLA 를 지원할경우

    if(!ptr2d) exit(1);

    for(int r =0; r < row; r++){
        for(int c =0; c < col; c++){
            ptr2d[r][c] = c + col * r;
        }
    }

    for(int r =0; r < row; r++){
        for(int c =0; c < col; c++){
            printf("%d", ptr2d[r][c]);
        }
        printf("\n");
    }

}
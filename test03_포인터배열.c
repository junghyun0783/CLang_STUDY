#include <stdio.h>

//포인터배열과 2차원 배열
int main(void){
    int arr0[3] = {1,2,3};
    int arr1[3] = {4,5,6};

    int* parr[2] = {arr0,arr1};

    for(int j = 0; j <2; ++j)
    {
        for(int i = 0; i <3; ++i){
            printf("%d(==%d, %d)", parr[j][i], *(parr[j] + i), *(*(parr + j) + i));
        }
        printf("\n");
    }
    printf("\n");


    /**********************************************************
    **********************************************************/

   
    int arr[2][3] = {{1,2,3},{4,5,6}};
    parr[0] = arr[0];
    parr[1] = arr[1];

    for(int j = 0; j <2; ++j){
        for(int i = 0; i <3; i++){
            printf("%d %d %d %d\n",
                arr[j][i], parr[j][i], *(parr[j] + i), *(*(parr +j) +i));
        }
        printf("\n");
    }
    printf("\n");

    printf("%p\n", &parr[0]);               // 0061FEE0
    printf("%p\n", parr[0]);                // 0061FEF4                
    printf("%p\n", arr);                    // 0061FF00
    printf("%p\n", &arr[0]);                // 0061FF00
    printf("%p\n", arr[0]);                 // 0061FF00
    printf("%p\n", &arr[0][0]);             // 0061FF00

}
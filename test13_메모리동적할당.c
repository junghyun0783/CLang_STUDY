#include <stdio.h>
#include <stdlib.h> // malloc(), free()

/***********************************************************************
    메모리 동적 할당
    가장중요한것은 힙에 들어간다. 수동으로 관리
    지속시간    : 프로그래머가 결정
    영역        : 메모리 크기를 미리 알수 없는경우
*************************************************************************/
int main(){
    float x;
    char str[] = "Dancing with a Star";

    int arr[100];




    double* ptr = NULL;

    ptr = (double*)malloc(30 * sizeof(double));

    if(ptr == NULL){
        puts("Memory allcation failed.");

        exit(EXIT_FAILURE);

    }
    printf("Before free %p\n", ptr);

    free(ptr);

    printf("After free %p\n", ptr);

    ptr = NULL;     // ptr를 사용하지 않으니 ptr의 포인터값을 Null로 만들어 준다.



    /********************************************************************************
        배열에도 메모리동적 할당 가능
    */

    int n = 5;

    ptr = (double*)malloc(n * sizeof(double));

    if(ptr != NULL)
    {
        for(int i =0; i < n; i++){
            printf("%f", ptr[i]);
        }
        printf("\n");

        for(int i =0; i < n; i++){
            *(ptr + i) = (double)i;
        }

        for(int i =0; i < n; i++){
            printf("%f", ptr[i]);
        }
        printf("\n");
    }
    free(ptr);
    ptr = NULL;

}
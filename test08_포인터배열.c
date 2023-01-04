#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//포인터배열과 2차원 배열
int main(void){
    int arr[10];
    int num = sizeof(arr) / sizeof(arr[0]);

    for(int i =0; i <num; ++i)
        arr[i] = (i + 1) * 100;

    int *ptr = arr;


    printf("%p %p %p\n", ptr, arr, &arr[0]);

    // 출력 결과 : AB000C AB000C AB000C


    ptr += 2;


    printf("%p %p %p\n", ptr, arr + 2, &arr[2]);

    // 출력 결과 : AB0222 AB0222 AB0222


    ////Note : arr += 2;      // invalid



    printf("%d %d %d\n", *(ptr + 1), *(arr + 3), arr[3]);

    // 출력 결과 : 400 400 400



    printf("%d %d %d\n", *ptr + 1, *arr + 3, arr[3]);

    // 출력 결과 : 301 103 400


    // int *ptr = arr;
    ptr -= 2;
    for(int i =0; i <num; ++i){

        // printf("%d %d\n", *ptr++, arr[i]);       // 이와 같이 증가연산자를 사용하기엔 선호하지 않는다

        printf("%d %d\n", *(ptr+i), arr[i]);       // 이와 같은 방법을 선호한다.

    }
}
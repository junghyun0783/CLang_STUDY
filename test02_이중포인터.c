#include <stdio.h>

// 2중 포인터의 작동 원리
int main(void){

     int a = 7;
     int *ptr = &a;

    *ptr = 8;

    int ** pptr = &ptr;

    **pptr = 9;

    printf("%p\n %p", ptr, pptr);

}
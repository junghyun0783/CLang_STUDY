#include <stdio.h>

int main(void){
    printf("hello world\n");
    int *numPtr;      // 포인터 변수 선언
    int num1 = 10;    // 정수형 변수를 선언하고 10 저장

    numPtr = &num1;   // num1의 메모리 주소를 포인터 변수에 저장


    printf("%d\n", *numPtr); // num1의 메모리 주소에 접근하여 num1의 값을 가져옴(역참조)

    printf("%p\n", numPtr)
    ; // num1의 주소값
    printf("%p\n", &num1);  // num1의 주소값

    
    return 0;

}
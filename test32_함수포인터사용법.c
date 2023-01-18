#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> // toupper(), tolower()

/*
    *********************** 매우 중요 ******************************
    항상 메모리 기준으로 프로그램을 돌리고 생각해라
    로직을 짤때 메모리 기준으로 컴퓨터 기준으로 생각하면
    그림이 그려질것이고, 이해가 간다.
    ****************************************************************
*/
void ToUpper(char *str) // => str의 첫번째 주소값을 찾아랏!
{
    while (*str) // => str의 주소값이 0(false)이 아니라면 계속 돌려! (힌트 : 문자열의 경우 마지막에 /0으로 끝나게 된다. 그래서 마지막에 false가 되면서 빠져 나가게 된다.)
    {
        *str = toupper(*str); // => 현 str주소값의 문자를 대문자로!
        str++;                // => str의 주소값 1을 더하라
    }
}

void ToLower(char *str)
{
    while (*str)
    {
        *str = tolower(*str);
        str++;
    }
}

int main()
{

    char str[] = "Hello, World!";

    /*
        함수 포인터 선언 : void (*pf)(char*);
        void    : 반환값
        pf      : 함수포인터명, 식별자
        (char*) : 인자값
    */
    void (*pf)(char *);

    pf = ToUpper; // pf 함수포인터가 ToUpper 라는 함수를 가르키도록 만들어준다. 첫번째방법
    // pf = &ToUpper;       // Acceptable    두번째 방법

    // pf = ToUpper(str);   // Not acceptible in C  불가능!!

    printf("String literal %lld\n", (long long)("Hello, World!")); // TEXT Segment 에 저장
    printf("Function pointer %lld\n", (long long)ToUpper);         // TEXT Segment 에 저장
    printf("Variable %lld\n", (long long)str);                     // 힙 에 저장

    (*pf)(str); // ToUpper(str);
    // pf(str);    //  K&R X, ANSI OK

    printf("ToUpper %s\n", str);

    pf = ToLower;
    pf(str);
    printf("ToLower %s\n", str);

    return 0;
}
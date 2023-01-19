#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h> // time

int main()
{
    /*
        자료형에게 별명을 붙여준다.
        typedef specifier
        - Give symbolic names (or aliases) to types
        - 이름만 바꾸는거지 새로운 자료형이 되는것이 아니다.
    */

    typedef unsigned char BYTE;

    BYTE x, y[10] = {
                0,
            },
            *z = &x;
}

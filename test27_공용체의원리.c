#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    /*
        Union
        - Store diferent data types in the same memory space
          -> 서로 다른 타입들이 같은 메모리에 공간을 사용한다.
        - Structure vs Union
          -> 구조체와 공용체의 차이점은 메모리를 어떻게 활용하느냐의 차이 입니다.
          -> 공용체는 좀 유연하고 편리한 문법이지만 실수할 확률이 많다.
    */

    // 메모리 사이즈는 8이다. 이유는 double의 사이즈가 8이다. 즉 사용하기전 최소 사용량을 8로 지정한다.
    // 모두의 시작 주소가 동일하다.

    union my_union
    {
        int i;
        double d;
        char c;
    };

    union my_union uni;

    printf("%zd\n", sizeof(union my_union));
    printf("%lld\n", (long long)&uni);
    printf("%lld %lld %lld\n", (long long)&uni.i, (long long)&uni.d, (long long)&uni.c);

    union my_union save[10];

    printf("%zd\n", sizeo(save));

    /*
        Union of different types
    */

    union my_union uni1;
    uni1.c = 'A';
    printf("%c %x %d\n", uni1.c, (int)uni1.c, uni1.i);
    // 0xCCCCCC41 = -858993599

    uni1.i = 0;
    uni1.c = 'A';
    printf("%c %x %d\n", uni1.c, (int)uni1.c, uni1.i);
    // 0x00000041 = 65
}
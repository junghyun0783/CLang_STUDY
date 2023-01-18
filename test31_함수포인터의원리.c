#include <stdio.h>

/*
    *****************************  매우중요  ******************************
    프로그래머는 함수의 이름을 이용해서 프로그램을 작성하지만
    컴파일러는 이름(식별자)들을 메모리에서의 주소로 번역한다.
    즉, 함수를 실행시킨다는 것은 메모리에서 함수의 주소 위치에 저장되어 있는
    명령어들을 순차적으로 수행한다는 의미이다.

    즉 프로그래머는 함수명을 적어도 컴퓨터는 주소를 알아야 한다는소리!!!!

    1. 프로그램 작성 후 컴파일 하면 실행파일이 만들어진다.
    2. 실행파일은 하드디스크에 저장
    3. 운영체제는 프로그램자체를 메모리에 복사해서 올려줘야함
    4. 프로그램 코드 자체가 저장되는 곳을 TEXT Segment라고 부른다.( 읽기 전용 )
    ************************************************************************
*/

void func()
{
    int i = 123;
    printf("%lld\n", (long long)&i);
};

int main()
{
    const char *message = "Banana"; // *message 변수 자체는 스택에 저장
    printf("Apple and %s", message);
    printf("\n");

    void (*f_ptr)() = func; // *f_ptr 변수 자체는 스택에 저장

    printf("%lld\n", (long long)&message); // 주소값은 스택에 저장
    printf("%lld\n", (long long)&f_ptr);   // 주소값은 스택에 저장
    printf("%lld\n", (long long)message);  // message의 리퍼럴 값(Banana)은 TEXT Segment에 저장
    printf("%lld\n", (long long)f_ptr);    // f_ptr이라는 func()은 TEXT Segment에 저장
    printf("%lld\n", (long long)main);     // main이라는 함수는 TEXT Segment에 저장
}
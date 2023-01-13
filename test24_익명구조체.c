#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct names
{
    char first[20];
    char last[20];
};

struct person
{
    int id;
    struct names name; // nested structre member -> 구조체를 다른 구조체의 멤버로 사용하는 방법을 이렇게 부름
};

struct person2
{
    int id;
    struct
    {
        char first[20];
        char last[20];
    }; // anonymous structure (익명 구조체!!)
};

/****************************************************************************
    익명 구조체
    말 그대로 구조체명이 없는것을 의미힌다.
    구조체안에 다른구조체를 넣는것을 nested structre member(중첩 구조체 멤버) 라고 부른다.
****************************************************************************/
int main()
{
    struct person ted =
        {
            123,
            {"Bill", "Gates"}};
    struct person ted3 = {125, "Robert", "Hand"};

    puts(ted.name.first);
    puts(ted3.name.first);

    struct person2 ted2 =
        {
            124,
            {"Steve", "wozniak"}};
    // struct person2 ted2 = {124, "Steve", "wozniak"}; // also works
    puts(ted2.first); // 익명으로 쓸경우 이렇게 호출 할 수가 있다!!!! puts(ted2.name.first)가 아닌

    return 0;
}

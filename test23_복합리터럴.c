#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAXTITL 41
#define MAXAUTL 31

struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    // char* title;
    // char* author;
    float price;
};

struct rectangle
{
    double width;
    double height;
};

double rect_area(struct rectangle r)
{
    return r.width * r.height;
}

double rect_area_ptr(struct rectangle *r)
{
    return r->width * r->height;
}
/*
    복합 리터럴 : 배열명이 없는 형태이며, 복합 리터럴은 C99에 추가된 기능이다.
    함수에 배열을 넘겨줄 때 복합 리터럴을 사용하면, 배열을 따로 선언하지 않아도 됨.
    내 생각인데 일회성으로 생각이 든다.
*/
int main()
{
    struct book book_to_read = {"Crime and Punishment", "Fyodor Dostoyevsky", 11.25f};

    /*
        Compound literals
         - Temporary structure values
    */

    // 1. 아래와 같이 구조체 데이터를 변경이 불가하다.
    //    여러가지 방법이 존재하는데
    // book_to_read = {"Alice in Wonderland", "Lewis Carroll", 20.3f};    // Error

    // 1-1. 아래와 같이 Copy함수를 통해서 변경이 가능하다.
    strcpy(book_to_read.title, "Alice in Wonderland");
    strcpy(book_to_read.author, "Lewis Carroll");
    book_to_read.price = 20.3f;

    // 1-2. 아래와 같이 구조체를 하나 더 만들어서 그값을 book_to_read = book2 처럼 대입해 주면 됨.
    struct book book2 =
        {
            "Alice in Wonderland",
            "Lewis Carroll ", 20.3f};
    book_to_read = book2;

    // 1-3. 초기화 해주는 앞에 (struct book)을 붙여주면 된다.
    // 문법적으로 '='의 우측값을 원래 rValue라고 명칭했는데 아래의경우는 lValue 이다.
    book_to_read = (struct book){"Alice in Wonderland", "Lewis Carroll", 20.3f};

    printf("%s %s\n", book_to_read.title, book_to_read.author);

    struct rectangle rec1 = {1.0, 2.0};
    double area = rect_area(rec1);
    area = rect_area((struct rectangle){1.0, 2.0});

    area = rect_area_ptr(&(struct rectangle){.height = 3.0, .width = 2.0}); // Designated initializers
    printf("%f\n", area);

    return 0;
}

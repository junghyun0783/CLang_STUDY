#include <stdio.h>

#define MAX 41

struct person
{
    char name[MAX]; // member
    int age;        // member
    float weight;   // member
};

int main()
{
    int flag;

    struct person jung;

    strcpy(jung.name, "junghyun kim");

    jung.age = 33;

    flag = scanf("%f", &jung.weight);
    printf("%f\n", jung.weight);

    struct person princess = {"jea won", 18, 58.0f};

    struct person princess2 = {
        "park jisung",
        42,
        72.0f};

    struct person beauty = {
        .age = 19,
        .name = "Bell",
        .weight = 150.0f};

    // 포인터 사용할 경우
    struct person *someone;

    someone = &jung;

    someone->age = 1001;
    printf("%s %d\n", someone->name, (*someone).age);

    struct book
    {
        char title[MAX];
        float price;
    };

    /* No tag */
    struct
    {
        char farm[MAX];
        float price;
    } apple, apple2;

    /* typedef and structure */

    typedef struct person my_person;

    my_person p3;

    typedef struct person person;

    person p4;

    typedef struct
    {
        char name[MAX];
        char hobby[MAX];
    } friend;

    friend f4;

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct personal_owner
{
    char rrn1[7]; // Resident Registration Number
    char rrn2[8]; // ex: 830422-1185600
};

struct company_owner
{
    char crn1[4]; // Company Registration Number
    char crn2[3]; // ex: 111-22-33333
    char crn3[6];
};

struct car_data
{
    char model[15];
    int status;
    // 원래 바래 아래와 같은 코드이지만 익명 공용체를 사용하면 밑에와 같이 사용된다.
    // union data ownerinfo;
    union
    {
        struct personal_owner po;
        struct company_owner co;
    }; // 익명 공용체이다.
};

int main()
{
}
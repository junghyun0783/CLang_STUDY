#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define FUNDLEN 50

struct fortune
{
    char bank_name[FUNDLEN];
    double bank_saving;
    char fund_name[FUNDLEN];
    double fund_invest;
};

/* 포인터를 사용할 경우
******************************************************************************/
double sum(struct fortune *my_fortune);

int main()
{

    struct fortune my_fortune = {
        "Wells-Fargo",
        123.45,
        "JPMorgan Chase",
        6789.7};

    printf("total : $%.2f.\n",
           sum(&my_fortune));

    return 0;
}

double sum(struct fortune *mf)
{
    return mf->bank_saving + mf->fund_invest;
}

/* 포인터를 사용하지 않을경우
******************************************************************************/
// double sum(struct fortune my_fortune);

// int main()
// {

//     struct fortune my_fortune = {
//         "Wells-Fargo",
//         123.45,
//         "JPMorgan Chase",
//         6789.7};

//     printf("total : $%.2f.\n",
//            sum(my_fortune));

//     return 0;
// }

// double sum(struct fortune mf)
// {
//     return mf.bank_saving + mf.fund_invest;
// }
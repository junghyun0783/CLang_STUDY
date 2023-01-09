#include <stdio.h>

int main(){

    //Object와  Identifiers 차이!

    int var_name = 3;      // var_name은 식별자다.

    int *pt = &var_name;
    *pt = 1;

    int arr[100];   // arr은 Object가 아니다!!  대입이 안됨!
    arr[0] = 7;     // arr[0]은 Object이다      대입이 가능함!

}
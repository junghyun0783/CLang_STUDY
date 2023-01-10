#include <stdio.h>


/*
    volatile
    - Do not optimize
    - (ex: hardward clock)
*/
int main(){
    volatile int vi = 1;            // volatile location
    volatile int *pvi = &vi;        // points to a volatile location

    int i1 = vi;

    // ...

    int i2 = vi;

    /*
        restrict (__restrict in VS)
        - sole initial means of accessing a data object
        - compiler can't check this restriction
    */
    int ar[10] = {1,2,3,4,5,6,7,8,9,10};
    int *par = ar;

    int *__restrict restar = (int*)malloc(10 * sizeof(int));
    if(!restar)exit(1);

    ar[0] += 3;
    par[0] += 5;

    restar[0] += 3;
    restar[0] += 5;


}
#include <stdio.h>

int main(void){
    int n =5 ;
    double x;
    x = n;
    int *p1 = &n;
    double *pd = &x;
    pd = p1;

    int *pt;
    int (*pa)[3];
    int ar1[2][3] = {3,};
    int ar2[3][2] = {7,};
    int **p2;               // a pointer to a pointer

    pt = &ar1[0][0];        // pointer-to-int

    pt = ar1[0];            //

    pt = ar1;

    pa = ar1;

    /* Pointer and const */

    int x = 20;
    const int y = 23;
    int *p1 = &x;
    const int *p2 = &y;
    const int **pp2 = &p1;
    //p1 = p2;              // Warning (Error)

    // *p2 = 123;           // Error
    p2 = p1;

    int x2 = 30;
    int *p3 = &x2;
    *pp2 = p3;
    pp2 = &p1;

    // {
    //     const int **pp2;
    //     int *p1;
    //     const int n = 13;
    //     pp2 = &p1;      // const?
    //     *pp2 = &n;      // sets p1 to point at n
    //     *p1 = 10;      // change n
    // }

    {
        const int y;
        const int *p2 = &y;
        int *p1;
        p1 = p2;                // warning (Error in cpp)
    }
    
    return 0;
}

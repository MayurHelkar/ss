#include <stdio.h>

int main()
{    
//    printf("ds : ", vPrintV()); // error: invalid use of void expression
    vPrintV();  // error: implicit declaration of function 'vPrintV'; did you mean 'vprintf'? [-Wimplicit-function-declaration]
//    printf("ds : ", vPrintI(3434)); // error: invalid use of void expression
    vPrintI(3434);  // error: implicit declaration of function 'vPrintI'; did you mean 'vprintf'? [-Wimplicit-function-declaration]
//    printf("%d\n", iPrintV());
    iPrintV();  // error: implicit declaration of function 'iPrintV' [-Wimplicit-function-declaration]
//    printf("%d\n", iPrintI(96538));
    iPrintI(96538); // error: implicit declaration of function 'iPrintI' [-Wimplicit-function-declaration]

    return 0;
}

void vPrintV(void);
void vPrintV(void)
{
    printf("vPrintV : 'Hello World'\n");

    return;
}

void vPrintI(int);
void vPrintI(int vInt)
{
    printf("vPrintV : 'Hello World and vInt'\n");

    return;
}

int iPrintV(void);
int iPrintV(void)
{
    printf("iPrintV : 'Hello World' : ");

    return 235934;
}

int iPrintI(int);
int iPrintI(int iInt)
{
    printf("iPrintI : 'Hello World : iInt' : ");

    return iInt;
}
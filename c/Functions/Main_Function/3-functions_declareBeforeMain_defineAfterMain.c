#include <stdio.h>

void vPrintV(void);
void vPrintI(int);
int iPrintV(void);
int iPrintI(int);

int main()
{
//    printf("ds : ", vPrintV()); // error: invalid use of void expression
    vPrintV();
//    printf("ds : ", vPrintI(3434)); // error: invalid use of void expression
    vPrintI(3434);
//    printf("%d\n", iPrintV());
    iPrintV();
//    printf("%d\n", iPrintI(96538));
    iPrintI(96538);

    return 0;
}

void vPrintV(void)
{
    printf("vPrintV : 'Hello World'\n");

    return;
}

void vPrintI(int vInt)
{
    printf("vPrintV : 'Hello World and vInt'\n");

    return;
}

int iPrintV(void)
{
    printf("iPrintV : 'Hello World' : ");

    return 235934;
}

int iPrintI(int iInt)
{
    printf("iPrintI : 'Hello World : iInt' : ");

    return iInt;
}
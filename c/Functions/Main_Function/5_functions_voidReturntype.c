#include <stdio.h>

void printHW(void)
{
    printf("Hello World\n");

    return;
    printf("printHW\n");
}

void main(void)
{
    printHW();
    
//    return 0;   // error: 'return' with a value, in function returning void [-Wreturn-mismatch]
    return;
}
#include <stdio.h>

int printHW(void)
{
    printf("Hello World : ");

//    return; // error: 'return' with no value, in function returning non-void [-Wreturn-mismatch]
    return 98546;
    printf("printHW\n");
}

int main(void)
{
    printf("%d\n", printHW());
    
//    return; // error: 'return' with no value, in function returning non-void [-Wreturn-mismatch]
    return 0;
}
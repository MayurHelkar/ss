#include <stdio.h>

//    printHW(void)   // error: return type defaults to 'int' [-Wimplicit-int]
int printHW(void)
{
    printf("Hello World\n");

//    return; // error: 'return' with no value, in function returning non-void [-Wreturn-mismatch]
    return 0;
    printf("printHW\n");
}

//    main(void)  // error: return type defaults to 'int' [-Wimplicit-int]
int main(void)
{
//    printf("%d\n", printHW());
    
//    return; // error: 'return' with no value, in function returning non-void [-Wreturn-mismatch]
    return 0;
}
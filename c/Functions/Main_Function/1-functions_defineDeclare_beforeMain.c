/*
Function Declaration (or Prototype):
Informs the compiler about the existence of a function before it is actually defined or used.
It provides the compiler with the necessary information to correctly interpret calls to that function.
This information includes:
Return Type: The type of value the function will return.
Function Name: The identifier used to call the function.
Parameter List (Signature): The types and order of the arguments the function expects to receive. 
                            Parameter names are optional in a declaration but their types are crucial.

Function Definition:
The function definition provides the actual implementation (the body) of the function. 
It contains the instructions that are executed when the function is called. 
The definition includes: 
Function Header: This matches the function declaration, including the return type, function name, 
                    and parameter list (with parameter names typically included).
Function Body: Enclosed in curly braces {}, this section contains the executable statements that 
                    perform the function's task.
*/

// what happens if function is Declare before the Definiton above the main() function?

#include <stdio.h>

void vPrintV(void)
{
    printf("vPrintV : 'Hello World'\n");

    return;
}
void vPrintV(void);

void vPrintI(int vInt)
{
    printf("vPrintV : 'Hello World and vInt'\n");

    return;
}
void vPrintI(int);

int iPrintV(void)
{
    printf("iPrintV : 'Hello World' : ");

    return 235934;
}
int iPrintV(void);

int iPrintI(int iInt)
{
    printf("iPrintI : 'Hello World : iInt' : ");

    return iInt;
}
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
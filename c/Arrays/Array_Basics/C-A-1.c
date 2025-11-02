/*
Array - Address and Value
*/

#include <stdio.h>

char arrayDeclare_G[10];    // char array declare

char arrayDefine_woS_sQ_G[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!' };    // char array define without size and single quotation

char arrayDefine_wSL_sQ_G[12] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd' };   // char array define with size less than defined and single quotation
char arrayDefine_wS_sQ_G[12] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '$' };   // char array define with size and single quotation
char arrayDefine_wSG_sQ_G[12] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '$', '@' };   // char array define with size more than defined and single quotation

char arrayDefine_woS_mQ_G[] = { "Hello World!" };    // char array define without size and multiple quotation
char arrayDefine_wSL_mQ_G[12] = { "Hello World" };    // char array define without size and multiple quotation
char arrayDefine_wS_mQ_G[12] = { "Hello World!" };    // char array define without size and multiple quotation
char arrayDefine_wSG_mQ_G[12] = { "Hello World!$" };    // char array define without size and multiple quotation

int main()
{
    char loop;
    char Size;

    printf("arrayDeclare_G Value : %d %p\n", arrayDeclare_G, arrayDeclare_G);
    printf("arrayDeclare_G Address : %u %p\n", &arrayDeclare_G, &arrayDeclare_G);

    printf("\n");

    Size = sizeof(arrayDeclare_G)/ sizeof(arrayDeclare_G[0]);
    printf("Define Global Character Array without Size ::\n");
    for(loop = 0; loop < Size; loop++)
    {
        printf("Value : \'%c\' \'%c\'\t\t", arrayDeclare_G[loop], *(arrayDeclare_G + loop));
        printf("Address : %u %p\n", &arrayDeclare_G[loop], (arrayDeclare_G + loop));
    }

    printf("\n");

    Size = sizeof(arrayDefine_woS_sQ_G)/ sizeof(arrayDefine_woS_sQ_G[0]);
    printf("Define Global Character Array with Size and Single Quotation ::\n");
    for(loop = 0; loop < Size; loop++)
    {
        printf("Value : \'%c\' \'%c\'\t\t", arrayDefine_woS_sQ_G[loop], *(arrayDefine_woS_sQ_G + loop));
        printf("Address : %u %p\n", &arrayDefine_woS_sQ_G[loop], (arrayDefine_woS_sQ_G + loop));
    }

    printf("\n");

    Size = sizeof(arrayDefine_wSL_sQ_G)/ sizeof(arrayDefine_wSL_sQ_G[0]);
    printf("Define Global Character Array with Size and Single Quotation ::\n");
    for(loop = 0; loop < Size; loop++)
    {
        printf("Value : \'%c\' \'%c\'\t\t", arrayDefine_wSL_sQ_G[loop], *(arrayDefine_wSL_sQ_G + loop));
        printf("Address : %u %p\n", &arrayDefine_wSL_sQ_G[loop], (arrayDefine_wSL_sQ_G + loop));
    }

    printf("\n");

    Size = sizeof(arrayDefine_wS_sQ_G)/ sizeof(arrayDefine_wS_sQ_G[0]);
    printf("Define Global Character Array with Size and Single Quotation ::\n");
    for(loop = 0; loop < Size; loop++)
    {
        printf("Value : \'%c\' \'%c\'\t\t", arrayDefine_wS_sQ_G[loop], *(arrayDefine_wS_sQ_G + loop));
        printf("Address : %u %p\n", &arrayDefine_wS_sQ_G[loop], (arrayDefine_wS_sQ_G + loop));
    }

    Size = sizeof(arrayDefine_wSG_sQ_G)/ sizeof(arrayDefine_wSG_sQ_G[0]);
    printf("Define Global Character Array with Size and Single Quotation ::\n");
    for(loop = 0; loop < Size; loop++)
    {
        printf("Value : \'%c\' \'%c\'\t\t", arrayDefine_wSG_sQ_G[loop], *(arrayDefine_wSG_sQ_G + loop));
        printf("Address : %u %p\n", &arrayDefine_wSG_sQ_G[loop], (arrayDefine_wSG_sQ_G + loop));
    }

    printf("\n");
    
    Size = sizeof(arrayDefine_woS_mQ_G)/ sizeof(arrayDefine_woS_mQ_G[0]);
    printf("Define Global Character Array with Size and Multiple Quotation ::\n");
    for(loop = 0; loop < Size; loop++)
    {
        printf("Value : \'%c\' \'%c\'\t\t", arrayDefine_woS_mQ_G[loop], *(arrayDefine_woS_mQ_G + loop));
        printf("Address : %u %p\n", &arrayDefine_woS_mQ_G[loop], (arrayDefine_woS_mQ_G + loop));
    }

    printf("\n");

    Size = sizeof(arrayDefine_wSL_mQ_G)/ sizeof(arrayDefine_wSL_mQ_G[0]);
    printf("Define Global Character Array with Size and Multiple Quotation ::\n");
    for(loop = 0; loop < Size; loop++)
    {
        printf("Value : \'%c\' \'%c\'\t\t", arrayDefine_wSL_mQ_G[loop], *(arrayDefine_wSL_mQ_G + loop));
        printf("Address : %u %p\n", &arrayDefine_wSL_mQ_G[loop], (arrayDefine_wSL_mQ_G + loop));
    }

    printf("\n");

    Size = sizeof(arrayDefine_wS_mQ_G)/ sizeof(arrayDefine_wS_mQ_G[0]);
    printf("Define Global Character Array with Size and Multiple Quotation ::\n");
    for(loop = 0; loop < Size; loop++)
    {
        printf("Value : \'%c\' \'%c\'\t\t", arrayDefine_wS_mQ_G[loop], *(arrayDefine_wS_mQ_G + loop));
        printf("Address : %u %p\n", &arrayDefine_wS_mQ_G[loop], (arrayDefine_wS_mQ_G + loop));
    }

    printf("\n");

    Size = sizeof(arrayDefine_wSG_mQ_G)/ sizeof(arrayDefine_wSG_mQ_G[0]);
    printf("Define Global Character Array with Size and Multiple Quotation ::\n");
    for(loop = 0; loop < Size; loop++)
    {
        printf("Value : \'%c\' \'%c\'\t\t", arrayDefine_wSG_mQ_G[loop], *(arrayDefine_wSG_mQ_G + loop));
        printf("Address : %u %p\n", &arrayDefine_wSG_mQ_G[loop], (arrayDefine_wSG_mQ_G + loop));
    }

    printf("\n");

    return 0;
}
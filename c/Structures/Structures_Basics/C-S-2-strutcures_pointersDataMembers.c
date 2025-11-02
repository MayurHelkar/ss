#include  <stdio.h>

struct datatype
{
    char Char, *charPtr;
    int Int, *intPtr;
    float Float, *floatPtr;
    double Double, *doubblePtr;
} datatypeDeclare_G, datatypeDefine_G = { 'a', &datatypeDefine_G.Char, 734, &datatypeDefine_G.Int, 
                                            23.956, &datatypeDefine_G.Float, 145.234, &datatypeDefine_G.Double };

/*
datatypeDeclare_G = { 't', 5575, 24.456, 743.235 }; // error: type defaults to 'int' in declaration of 'datatypeDeclare_G' [-Wimplicit-int]
                                                    // error: conflicting types for 'datatypeDeclare_G'; have 'int'
*/

int main()
{
//    datatype datatypeDeclare_L; // error: unknown type name 'datatype'; use 'struct' keyword to refer to the type
    struct datatype datatypeDeclare_L;
    struct datatype datatypeDefine_L = { 'W', &datatypeDefine_L.Char, 9326, &datatypeDefine_L.Int, 
                                            65.103, &datatypeDefine_L.Float, 7885.20096, &datatypeDefine_L.Double };

    printf("datatypeDeclare_G : %p and &datatypeDeclare_G : %p\n", datatypeDeclare_G, &datatypeDeclare_G);
    
    printf("\n");

    printf("Before initialization of datatypeDeclare_G :\n");
    printf("datatypeDeclare_G.Char : %c and &datatypeDeclare_G.Char : %p\n", datatypeDeclare_G.Char, &datatypeDeclare_G.Char);
    printf("datatypeDeclare_G.Int : %c and &datatypeDeclare_G.Int : %p\n", datatypeDeclare_G.Int, &datatypeDeclare_G.Int);
    printf("datatypeDeclare_G.Float : %c and &datatypeDeclare_G.Float : %p\n", datatypeDeclare_G.Float, &datatypeDeclare_G.Float);
    printf("datatypeDeclare_G.Double : %c and &datatypeDeclare_G.Double : %p\n", datatypeDeclare_G.Double, &datatypeDeclare_G.Double);

    printf("\n");

//    datatypeDeclare_G = { 't', 5575, 24.456, 743.235 }; // error: expected expression before '{' token
    datatypeDeclare_G.Char = 't', datatypeDeclare_G.Int = 5575, datatypeDeclare_G.Float = 23.456, datatypeDeclare_G.Double = 743.235;

    printf("After initialization of datatypeDeclare_G :\n");
    printf("datatypeDeclare_G.Char : %c and &datatypeDeclare_G.Char : %p\n", datatypeDeclare_G.Char, &datatypeDeclare_G.Char);
    printf("datatypeDeclare_G.Int : %c and &datatypeDeclare_G.Int : %p\n", datatypeDeclare_G.Int, &datatypeDeclare_G.Int);
    printf("datatypeDeclare_G.Float : %c and &datatypeDeclare_G.Float : %p\n", datatypeDeclare_G.Float, &datatypeDeclare_G.Float);
    printf("datatypeDeclare_G.Double : %c and &datatypeDeclare_G.Double : %p\n", datatypeDeclare_G.Double, &datatypeDeclare_G.Double);

    printf("\n");

    printf("Before initialization of datatypeDeclare_L :\n");
    printf("datatypeDeclare_L.Char : %c and &datatypeDeclare_L.Char : %p\n", datatypeDeclare_L.Char, &datatypeDeclare_L.Char);
    printf("datatypeDeclare_L.Int : %c and &datatypeDeclare_L.Int : %p\n", datatypeDeclare_L.Int, &datatypeDeclare_L.Int);
    printf("datatypeDeclare_L.Float : %c and &datatypeDeclare_L.Float : %p\n", datatypeDeclare_L.Float, &datatypeDeclare_L.Float);
    printf("datatypeDeclare_L.Double : %c and &datatypeDeclare_L.Double : %p\n", datatypeDeclare_L.Double, &datatypeDeclare_L.Double);

    datatypeDeclare_G.Char = 'H', datatypeDeclare_G.Int = 2396, datatypeDeclare_G.Float = 54.236, datatypeDeclare_G.Double = 59.2552;

    printf("After initialization of datatypeDeclare_L :\n");
    printf("datatypeDeclare_L.Char : %c and &datatypeDeclare_L.Char : %p\n", datatypeDeclare_L.Char, &datatypeDeclare_L.Char);
    printf("datatypeDeclare_L.Int : %c and &datatypeDeclare_L.Int : %p\n", datatypeDeclare_L.Int, &datatypeDeclare_L.Int);
    printf("datatypeDeclare_L.Float : %c and &datatypeDeclare_L.Float : %p\n", datatypeDeclare_L.Float, &datatypeDeclare_L.Float);
    printf("datatypeDeclare_L.Double : %c and &datatypeDeclare_L.Double : %p\n", datatypeDeclare_L.Double, &datatypeDeclare_L.Double);

    printf("\n");

    printf("Defintion of datatypeDefine_G :\n");
    printf("datatypeDefine_G.Char : %c and &datatypeDefine_G.Char : %p\n", datatypeDefine_G.Char, &datatypeDefine_G.Char);
    printf("datatypeDefine_G.Int : %c and &datatypeDefine_G.Int : %p\n", datatypeDefine_G.Int, &datatypeDefine_G.Int);
    printf("datatypeDefine_G.Float : %c and &datatypeDefine_G.Float : %p\n", datatypeDefine_G.Float, &datatypeDefine_G.Float);
    printf("datatypeDefine_G.Double : %c and &datatypeDefine_G.Double : %p\n", datatypeDefine_G.Double, &datatypeDefine_G.Double);

    printf("Defintion of datatypeDefine_L :\n");
    printf("datatypeDefine_L.Char : %c and &datatypeDefine_L.Char : %p\n", datatypeDefine_L.Char, &datatypeDefine_L.Char);
    printf("datatypeDefine_L.Int : %c and &datatypeDefine_L.Int : %p\n", datatypeDefine_L.Int, &datatypeDefine_L.Int);
    printf("datatypeDefine_L.Float : %c and &datatypeDefine_L.Float : %p\n", datatypeDefine_L.Float, &datatypeDefine_L.Float);
    printf("datatypeDefine_L.Double : %c and &datatypeDefine_G.Double : %p\n", datatypeDefine_G.Double, &datatypeDefine_G.Double);

    return 0;
}
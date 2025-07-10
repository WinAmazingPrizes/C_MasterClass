// ! C has no #import //
#include <stdio.h>// - printf, scanf //TODO- These Functions Actully return (int) !?
#include <stdlib.h>// - malloc(), free()
#include <limits.h>// - Hardware Specs Document
#include <float.h>
#include <math.h>// - pg92 Includes Sqrt(), abs(), fabs(), pow() etc.
//#include "def.h"
// ! Local Files USE "def.h" NOT <def.h>
#define TAXRATE 0.15
// ! No Semicolons TAXRATE 0.15; will LITEALLY Replace TAXRATE with (0.15;) NOT (0.15)
// The above is the 3rd way of defining constants. C page 57
//* Special "Non-Printable Control" Characters. C page 55
const double monthrate = TAXRATE/12;
// The above is 2nd way of defining constants. Use Constant Variables
// ? monthrate is the CONSTANT VARIABLE here ^10
// ? Use const to define Constants dependent on other Constants.

// STRUCTURE of C Porgram //
/* 1. PreP-processor
    2. GLOBAL Things
    3. Function Prototypes
*/

//Common I/O - printf(), scanf(), C page 63 //* Input/Output Example, needs <stdio.h>
//printf() - //*printf( Control-String%, argument list)
//The Control String "Controls" what is printed out to screen
//If the Control-String is longer than one line, the continuation character '\' must be used:
void salarycalculation()//* Input/Output Example, needs <stdio.h> //
{
    int salary =0;
    int other =0;
    int taxToPay =0;
    printf("Enter Your Salary : ");
    scanf("%d", &salary);
//scanf() - //*scanf( "Type", &Location )

    printf("Enter Your Other Income(s) : \n");
    scanf("%d", &other);
    taxToPay = ( salary + other ) * TAXRATE;
    printf("Your Tax to pay : %d   \n", taxToPay);
}

void assignmentExample()//* Page 85
{
    //The Assignment Operator is =
    // It is BINARY as it requires two operands unlike Unary (-)
    // LHS is a Variable that NAMES Memory Locations
    int salary = 5000;//* The Constants are on RHS
    // The L-value of salary is the address of memory to hold 5000

    int account = account - (salary*TAXRATE);
    //* Old account value is retrieved to RHS and lost
    //* after new assignment to account 

    account *= account;
    // This is a known as "ARITHMETIC" Assignment

}

void typecastingExample()//* 3 Conversion Types 
//*- Explicit - pg89 , Arithmetic - pg90, Assignment - pg90
{
    //* Type conversion takes place when operands are
    //* of DIFFERENT Types
    int a = 5 + 2.68;
    //Problem as a Needs to be float
    //This will truncate ? - YES ( Try and run )
    printf("The value of a is : %d\n",a);

    float a1 = 2.4+(4/5);
    float a2 = 2.4+(4.0/5);
    //*a2 has PROPER working value as INT 5 is "Promoted" to Float

}

void bitManipulationExample()//* C pg93
//* There are 6 Total Bitwise Operators - Priority ? pg93
//* ~ , &, | , ^ , << , >>
//! Only for INT types - short, int, double, char - YES CHAR
{
    int b = 12;
    // 12 * 2^4 = 192
    b<<4; //! This DOES NOT modify b. It is simply an expression //! pg 58 on Variables RE-READ !!!
    b = b <<4; //? This Properly modifies b.
    printf("b in Binary is %d",b);

}

void branchingExamples()//*- C pg109 Chapter 6.6
//! - Compiler Assocaites _else with nearest "unresolved" _if
{

}

void switchExample()
{
    char choice;
    int num1,num2;
    int result=0;

    printf("Select an Operation\n");
    printf("A-addition; S-subtraction; M-Multiplication\n"); 
    printf("Your choice (A, S or M) => "); 
    scanf("%c", &choice);
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);//! Need a space ? "%d %d" ??* 
    //*                         - NO %d auto-kills whitespace

    switch(choice)//? - switch(Switch Variable)
    {
        case '*': result = num1*num2;
            break; //! (break) is highly important - you will fall through
        case '-': result = num1-num2;
            break;
        case '+': result = num1+num2;
            break;
        default: printf("Fuck Off\n");
    }
    printf("%d %c %d = %d\n",num1,choice,num2,result);
}

void conditionalExample()//* - C pg116 Chapter6.7
{
    /*The Conditional takes 3 Expressions. First two separated
  by a ? and the last two separated by a : */
// Exp1 ? Exp2 : Exp3 // Only Exp1 is evaluated - Exp2 is TRUE
    int c = 1;
    c? printf("C is the variable name for the memory address holding 1\n"):("No Lol\n");
}

void loopExamples()//* - pg119 Chapter 7.1
{
    // Always remember 1. Initialize 2. Test 3. Loop Body 4. Update
    // While - Sentinel Loop - Not Pre-Known
    // For - Counter Loop - Pre Known
    // Do-While
    int i = 1;
    int a = 5;
    while(i!=1)
    {
        int a = 5;
    }
}

void functionExample(int a, int b)//* pg145 Chapter 8.1
//-This is a Function DEFINITION (Header+Body)
//(Header) - Formal Parameters ( write them nicely = Formal )
{
    printf("The answer is : %d   \n", a+b);
}

void CallByReference(int *ptr,int**ptr2,int*ptr3567)
{
    *ptr = 10;
    **ptr2 = 20;
    *ptr3567 = 30;
}
void pointers()//* pg158 Chapter 8.5 // Function Pointers - See XXX
{
    int number = 6;
    printf("number = %d, &number = %p   \n",number, &number);

    //* pg159 Pointer Variables 
    //We may have variables, which store the addresses of memory locations
    //? [[datatype]] *name;

    int *ptrINT; //!- points to random INT ??? !YES
    float *ptrFLOAT;
    char *ptrCHAR;
    printf("%p   \n%p   \n%p\n", ptrINT, ptrFLOAT, ptrCHAR);//!- Proof

    int *ptrProper = NULL;
    //* Initialize your pointer to 000000000 for good Hygiene

    //* - Dereferencing - pg161
    int num1 = 3;
    int *ptr = &num1;
    printf("The value stored is %d   \n", (*ptr));

    int num2 = 4;
    int num3 = 6;

    int *ptr2 = &num2;
    int **ptr222 = &ptr;//* Double Pointer !!! Type is INT*
    int *ptr3 = &num3;
    CallByReference(ptr2,ptr222,ptr3);
    printf("Num2 = %d, Num3 = %d   \n",*ptr2,*ptr3);
}

void RecursiveFunctions()// - C pg169 Chapter 8.7
{
    //Base Case (Victory/Failure Condition)
    /**
     
     * *int fact2(int n)
     * {
     * * if(n==0)
     * *    return 1;
    //Recursive Case
     * * else 
     * * return n * fact2(n-1);
     * }
     
     **/
}
//TODO Functional Decomposition - C pg175 Chapter 8.8
//TODO All Functions have Input, Initialization, Computation and Output

void arrayExamples()
{
    // C - page 181 Chapter 9 Arrays
    //* The Purpose of Arrays is to store related things
    //* of SAME TYPE under a SINGLE NAME, Consecutively

    //TODO C - page 182 Declaring Arrays 9.1
    //? <<TYPE>><<ARRAY_NAME>> <<[>> <<SIZE>> <<]>>
    //* int myIntArray[6048]; // int* IntPointerArray[5];
    char mainCharacterName[5];//- different from String (no /0)

    //TODO C - page 183 Initializing Arrays 9.2
    //? <<TYPE>><<ARRAY_NAME>> <[>SIXE<]> = <{> X , X1 , X2 <}>;
    //* int favPrimes[3] = {2,3,5}; 0s will fill UN-Initialized Spots

    int* ArrayOfIntPointers[5];//! SPECIAL CASE : Array Of Pointers
    for(int i=0; i<5; i++)
    {
        //* #include <stdlib.h> for malloc( ) 

        //* ArrayOfIntPointers[i] = malloc(sizeof(int*));
        // This ^ is making each slot hold a reference to 8 BYTES
        ArrayOfIntPointers[i] = malloc(sizeof(int));
        // This ^ is making each slot hold a reference to 4 BYTES
        //! ^ ^ ^ You Must Initialize Array of Pointers !!!
        //* malloc() does not get rid of shit that was there
        //* calloc() does initialize shit in blocks to 0
        //! Do this or else NO PRINTING & UNDEFINED BEHAVIOUR
        /*
        ArrayOfIntPointers: [ ??? ][ ??? ][ ??? ][ ??? ][ ??? ]
                               |      |      |       |       |
                             Garbage Garbage Garbage Garbage Garbage
        
        after malloc().....

        ArrayOfIntPointers: [ 0x123 ][ 0x456 ][ 0x789 ] ...
                               |        |        |
                             [ 5 ]     [ 5 ]     [ 5 ]


        */
        *ArrayOfIntPointers[i] = 5;
    }

    //! malloc returns generic pointer ((*void))
    //! to [[F I R S T]] BYTE of allocated mem block
    //! You must Type-Cast it: int* numpp = *void;
    void* raw = malloc(4); // Raw block of 4 bytes
    int* nums = malloc(5 * sizeof(int));  // Block of 5 ints
    char* str = malloc(20); // Block of 20 bytes for a string

    for(int j=0; j<5; j++)
    {
        printf("This Array Contains %d at %d   \n",*ArrayOfIntPointers[j],j);
    }
    free(raw);
    free(nums);
    free(str);
    for(int j=0; j<5; j++)
    {
        free(ArrayOfIntPointers[j]);
    }

    //TODO - Operations On Arrays 9.3 C - page 184
    // Assignment
    //? <<Type>> <<NAME>> [X] = { LIST };
}

void arraysAndPointers()
{
    //TODO - P O I N T E R S  &  ARRAYS C - page 187
    //* The Array Name is a POINTER CONSTANT
    int days[12]; //? days is pointing to first element in array days[0]
    printf("The value of the Pointer Constant days is : %p", days);

    //EXAMPLE , CONSTANTS CANNOT CHANGE VALUE THROUGHOUT COMPUTATION
    int five = 5;
    int ten = 10;
    //*1
    int* intPoint = &five;
    //Point to 10
    intPoint = &ten;
    //Change De-Ref
    *intPoint = 20;

    //*2 - THIS IS A POINTER CONSTANT
    int* const intPointKONST = &five;
    //! intPointKONST = &ten; CANNOT change Address
    //! days++; CANNOT change Address
    *intPointKONST = 20; //*Change Value

    //*3 - THIS IS A POINTER TO A CONSTANT
    const int* KONSTintPointer = &five;
    KONSTintPointer = &ten; //*Change Address
    //! *KONSTintPointer = 20; CANNOT change Value

    //*4 - CONSTANT POINTER TO A CONSTANT
    const int* const PointerName = &five;
    five = 20;

}
void maximum1(int table[], int n)
//! It is IMPOSSIBLE to pass an Array by value in C :)
{

}

void maximum2(int table[5])
//The 5 is ignored as arrays DECAY to pointers when passed
//to functions
{


}

void maximum3(int* table, int n)
{

}


int main(void)
{
    float salary = 6000;
    //* salary is a VARIABLE. 6000 is a CONSTANT * C page 58//
    float others = 1000000;

    //Example debugging statements (3)//
    //! Conversion Specifiers %f,%d, C page 65 - YOU MISSED COMPLETELY
    //! Only has DEC, OCTAL (start with 0) , HEX (0xFF), Long (L at back)
    printf("The Value of others is %f\n", others);
    //! Passing Float to %d & %u causes undefined behaviour, C 65
    //! Type of item MUST match with Conversion Specifier, C 65
    printf("The Value of others is %d\n", others);
    printf("The Value of others is %u\n", others);

    //salarycalculation();
    //typecastingExample();
    //bitManipulationExample();
    //switchExample();
    //conditionalExample();
    functionExample(4,5);
    pointers();

    //! - C pg176 Multi-File Programs Chapter 8.9 !!!
    //! - Must use cl.exe to Compile All if you cannot properly define PATHs & Files in task.json
    int f = Supportfunction(5,6);
    printf("The value of f is : %d   \n", f);
    //! - See support.c
    //TODO gcc C_MasterClass.c support.c -o C_MasterClass.exe
    //TODO gcc << MainFile.c >> << OtherFile(s).c >> << -o >> << FinalExecutable.exe >>
    //TODO ./C_MasterClass.exe OR C_MasterClass.exe

    arrayExamples(); // C - page 181 Chapter 9 Arrays
    arraysAndPointers(); // C - page 187 Chapter 9.5
    int table[10]={0,1,2,3,4,5,6,7,8,9};
    int n = 10;
    maximum1(table,n);
    maximm2(table);
    maximum3(table,n);
    //! Arrays DECOMPOSE to Pointers in C. 
    BubbleSort(); // C - Page 193 Chapter 9.6 Sorting Arrays


    return 0;
}
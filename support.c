#include <stdio.h>
#include "def.h" //! Error ?
#include <stdbool.h>

/**
* ! Include Errors - Please Update Include Path ?!
* ! #include tells Compiler - LOOK HERE 0_0. This Error means
* ! Compiler cannot find your FILE  - USE TERMINAL AND STATE FILES !!!
*
* * The play button's ( Top Right Hand Corner )
* * Activity is dependent on Tasks.json file
*
* ! For VS Code - update Intellisense from .vscode/c_cpp_properties.json
* ! LOCAL FILES USE "def.h" NOT <def.h>
* ! gcc C_MasterClass.c -o C_MasterClass.exe
**/

int Supportfunction(int f, int g)
{
    return 5*(g+f);
}
//! NEW EXE WITHOUT RE-COMPILING MAIN 
//TODO gcc -c support.c -o support.o
//* if no Main.o file : gcc -c C_MasterClass.c -o C_MasterClass.o 
//TODO gcc  C_MasterClass.o support.o -o C_MasterClass.exe

//TODO gcc << compile only >> << MainFile >> << -o >> << MainFile.o >>
//TODO     { compile only = NO LINKING }

void Supportfunction2(int *ptr1, float* ptr2)
{
    *ptr1+*ptr2;
}

void bubbleSort()
//* 1. Compare first two numbers. "Higher Index" number is bigger = keep
//* 2. Keep Going until last two compared
{
    int i = 0;
    int table[5];
    int temp =0;
    printf("Enter FIVE numbers :   \n");
    //! Each Scanf() for each line -> Need for loop
    for(i;i<5; i++)
    {
        scanf("%d", &table[i]); //!-> Will Auto \n for each INPUT
    }
    printf("Listing Numbers :   \n");
    for(i=0; i<5; i++)
    {
        printf("Position %d Holds : %d   \n", i+1, table[i]);
    }

    //begin sort//
    for(int Pass=0; Pass<4; Pass++)
    {
        for(i=0; i<4;i++) //THE INSIDE WAS WITTEN FIRST -> DO INSIDE (N-1) TIMES -> 5 OBJ need 4 PASSES
        {
            if(table[i]>table[i+1])
            {
                temp = table[i+1];
                table[i+1] = table[i];
                table[i] = temp;
            }
            //! NO NEED FOR i++ !!! This is Being done in LOOP !
            //! This will SKIP certain "SLOTS"
        }
    }
    printf("Listing New Numbers :   \n");
    for(i=0; i<5; i++)
    {
        printf("Position %d Holds : %d   \n", i+1, table[i]);
    }
    
}

void BubbleSort(int n, int* p)
{
    int temp =0;
    int i =0;
    printf("Listing Numbers :   \n");
    for(i=0; i<(n); i++)
    {
        printf("Position %d Holds : %d   \n", i+1, p[i]);
    }

    //begin sort//
    for(int Pass=0; Pass<(n-1); Pass++)
    {
        for(i=0; i<(n-1);i++) //THE INSIDE WAS WITTEN FIRST -> DO INSIDE (N-1) TIMES -> 5 OBJ need 4 PASSES
        {
            if(p[i]>p[i+1])
            {
                temp = p[i+1];
                p[i+1] = p[i];
                p[i] = temp;
            }
        }
    }
    printf("Listing New Numbers :   \n");
    for(i=0; i<(n); i++)
    {
        printf("Position %d Holds : %d   \n", i+1, p[i]);
    }
    
}



void searchingArrays()// - We want to check if (x) is IN array
{
    linearSearch();

    int arr[3];
    int i,key,found;
    printf("Enter 3 Numbers :  \n");
    for(i=0; i<3; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Search Key   \n");
    scanf("%d",&key);
    found = LinearSearch(arr, 3, key);
    if(found==1){printf("The key is found !!! LIN  \n");}
    else{printf("Key NOT found !!! LIN  \n");}

    found = BinarySearch();
    if(found==1){printf("The key is found !!! BIN  \n");}
    else{printf("Key NOT found !!! BIN  \n");}
}

void MultiDimArrays()
{
    //& Declaring Multi-Dimensional Arrays
    // x [ row ][ column ]
    int x2[3][5];
    int x3[4][2][2]; // Maximum is 256 Dimensions ???

    /*
    * X[0][0]....X[0][4]
    
    * X[2][0]....X[2][4]
    */

    //& Initializing Multi-Dimensional Arrays
    //* 2 POSSIBLE WAYS ONLY 
    x2[2][4] = 4;

    int x2d[3][2] = {{1,2},{3,4},{5,6}};
    int x2D[2][2] = {1,2,3,4};

    //! x2 = {{1,2,0,4,3},{2,3,32,2,1},{1,5,3,2,1}};
    //* Arrays are NOT assignable objects in C
    //* You can only double brace ASSIGN at POINT of Declaration
    //* You can only assign individual values later on

    //& Operations on Multi-Dimensional Arrays
    //Row Summation
    int array1[3][3] = {1,2,3,4,5,6,7,8,9};
    int r;
    int c;
    int sum = 0;
    for(r=0; r<3; r++)
    {
        sum=0;
        for(c =0; c<3; c++)
        {
            sum += array1[r][c];
        }
        printf("The sum of row %d is : %d   \n",r+1,sum);
    }

    //! MATRIX MULTIPLICATION (2D for simplicity)
    //!{

    //!          PLEASE FINISH !

    //!}
}

void MultiDimArraysAndPointers()
{
    //& Addressing Memory Slots in Multi-Dimensional Arrays
    int ar[2][2];
    //* ar is an array of 2 elements, each with 2 integers

    printf("The Following addresses are the same ?   \n");
    //!printf(" ar == &ar[0][0] ? : %d   \n", ar==&ar[0][0]);//!NO
    printf(" ar == &ar[0] ? : %d   \n", ar==&ar[0]);//YES

    /* ! ar is a POINTER CONSTANT
    ! &ar[0] is Pointing to an Object of Size ( 2 integers )
    !        it is actually an Array Pointer !
    ! &ar[0][0]  is Pointing to an Interger
    !            it is an Integer Pointer !
    */
}


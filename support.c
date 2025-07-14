#include <stdio.h>
#include "def.h" //! Error ?
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

    BinarySearch();


}



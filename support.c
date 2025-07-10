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




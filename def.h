#define CONST1 90
#define CONST2 900

//No Names - Just types
int Supportfunction(int ,int);
void Supportfunction2(int*, float*);

/*
* 07 / 14 / 2025 
? Why can functions such as bubbleSearch() and BubbleSearch( int n, int* p)
? compile despite not being in def.h ? 
? What exactly is the Purpose of Listing functions in def.h ???
* ANS :
* Being in def.h saves you from being stupid.
* E.g. You called BubbleSort(int* p, int n) INSTEAD of BubbleSort(int n, int* p) 
* ! ARGUMENT(S) ORDER MATTERS
* This will compile nicely and the computer will let you fuck yourself
* having a definition in "def.h" will allow checking to occur
* 
* YOU MUST HAVE #include "def.h" in C_MasterClass.c !!! for checking to happen !
*/
void bubblesearch();
void BubbleSearch(int n, int*p);

void linearSearch();
int LinearSearch(int arr[], int n, int key);
int BinarySearch();

void MultiDimArrays();// C - pg201 9.8
void MultiDimArraysAndPointers();
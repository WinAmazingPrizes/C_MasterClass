#include <stdio.h>
#include <stdlib.h>
#include "def.h"

/* 
* FunFact ! In C, sizeof() function can be used to
* find size of array via sizeof(arr)/ sizeof(arr[0])
* ! Only works if in same scope as arr will decay into
* ! pointer and sizeof(arr) will give pointer

*/
void linearSearch()
{
    int arr[3] = {24,563,2};
    int searchKey;
    int i;

    printf("Enter Number to be searched :   \n");
    scanf("%d",&searchKey);

    //Linear Search is Literally just a for loop
    //Can check more than one at a time ?
    //if(arr[i]==Key || arr[i+1] == Key) ?
    for(i=0; i<3; i++) 
    {
        if(arr[i]==searchKey)
        {
            printf("The value is within the SIMPLE array   \n");
            break;
        }
    }
}

int LinearSearch(int* arr, int n, int key)// - C page 197
{
    int i = 0;
    for(i; i<n ; i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int BinarySearch()// - C page 198 example 9.9
//! For Efficiency gains, Binary Search ASSUMES a sorted array.
//! 31 elements need 5 comparisons - Principle of HALFING search Space
{
    #define SIZE 10
    int arr[10] = {1,2,3,44,55,6,7,88,9,-1};
    int key = 2;

    //1. Find mid-point
    //2. Compare key
    //3. Search Respective Half

    int middle;
    int first = 0;//* ALWAYS 
    int last = SIZE-1;

    while(first <= last)//! - Begin Search ( Binary = While )
    {
        middle = (first+last)/2;
        if(key == arr[middle])
        {
            return 1;
        }
        else if(key< arr[middle])
        {
            last = middle-1;
        }
        else
        {
            first = middle + 1;
        }
    }

    return -1;
}
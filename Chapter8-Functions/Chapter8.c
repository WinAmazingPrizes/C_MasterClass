#include <stdio.h>
#include <math.h>
#include <float.h>

int HowManyDigitsPBV(int n)
{
    int count=0;
    if(n==0){return 1;}
    if(n<0){n = -n;}

    while(n != 0)
    {
        n = n/10;
        count++;
    }
    
    return count;
}

void HowManyDigitsPBR(int n, int*r)//! int*r give an A&DDRESS When Calling
{
    int count=0;
    if(n==0){*r=0;}
    if(n<0){n = -n;}

    while(n != 0)
    {
        n = n/10;
        (*r)++; //! DIFFERENCE BETWEEN (*r)++ & *r++
    }
}

int main()
{
    printf("Welcome to Chapter 8 Exercises");
    int NUM = 0; //! INITIALIZE VARIABLES
    int resultss = 0; //! INITIALIZE VARIABLES
    printf("ENTER NUMBER:");
    scanf("%d",&NUM);
    resultss = HowManyDigitsPBV(NUM);
    printf("The Number has %d Digits   \n", resultss);

    NUM = 0;
    resultss = 0;
    printf("ENTER NUMBER:");
    scanf("%d",&NUM); //
    HowManyDigitsPBR(NUM, &resultss);
    printf("The Number has %d Digits   \n", resultss);

    int n = 777;
    int m = 4;
    int t = n%m;
    printf("The value of t is : %d", t);

    return 0;
}
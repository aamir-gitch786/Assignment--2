/******************************************************************************

Q 8 : Write a program to check whether the given number is even or odd using a bitwise
operator.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int n;
   printf("Enter the number\n");
   scanf("%d",&n);

n ^ 1 == n + 1?"Even number":"Odd number" ;
    return 0;
}

/******************************************************************************
 As we know bitwise XOR Operation of the Number by 1 increment the value of the number by 1
 if the number is even otherwise it decrements the value of the number by 1 if the value is odd.
 /******************************************************************************

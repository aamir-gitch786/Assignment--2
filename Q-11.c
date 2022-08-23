/******************************************************************************
11. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)
*******************************************************************************/

#include <stdio.h>

int main()
{
   int n,new_digit;
   printf("Enter the number\n");
   scanf("%d",&n);
   printf("Enter appending digit \n");
   scanf("%d",&new_digit);
   printf("Resulting number is %d",(n*10+new_digit));

    return 0;
}


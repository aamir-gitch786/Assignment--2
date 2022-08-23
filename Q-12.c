/******************************************************************************
12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.
*******************************************************************************/

#include <stdio.h>

int main()
{
   float INR,USD;
   printf("Enter the amount in INR \n");
   scanf("%f",&INR);
   printf("Amount in USD is : %0.2f",(1/76.23)*INR);

    return 0;
}

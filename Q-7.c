/******************************************************************************
7. Write a program to find the position of first 1 in LSB.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,counter=1;
    printf("Enter the number\n");
    scanf("%d",&n);
   while(1)
{
    if(n%2==1)
    {
        printf("Position of first 1 in LSB is %d",counter);
        break;
    }
    else
    {
        counter++;
        n=n/2;
    }
}
    return 0;
}

/******************************************************************************
LOGIC:-

all odd number is always LSB is 1 .
Example:
1 - 1
2 - 10
3 - 11
4 - 100
5 - 101
*******************************************************************************/

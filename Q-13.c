/******************************************************************************

 13. Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,r;
    printf("Enter the three digit number\n");
    scanf("%d",&n);
    r=n%10;
    n=n/10;
    printf("After rotating its one position towards the right %d",r*100+n);

    return 0;
}


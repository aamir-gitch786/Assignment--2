
#include<stdio.h>
int main()
{
    int n,i=0,length,r;

    printf("Enter the length of number:\n");
    scanf("%d",&length);
    int array[length];
    printf("Enter the number:");
    scanf("%d",&n);

    while(n!=0)
    {
       r=n%10;
       array[i] =r;
       i++;
       n=n/10;

    }
    for(int j=length-1;j>=0;j--)
    {
        printf("%d ",array[j]);
    }
}

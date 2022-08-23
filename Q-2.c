#include<stdio.h>
int main()
{
    int n,tem;
    printf("Enter the number:\n");
    scanf("%d",&n);
    tem=n;
    n=n/10;
    printf("Number %d without its last digit %d",tem,n);
    return 0;
}

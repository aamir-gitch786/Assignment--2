
#include<stdio.h>
int main()
{
    int n,r,sum=0,tem;
    printf("Enter the three-digit number\n");
    scanf("%d",&n);
    tem=n;
    while(n!=0)
    {
        r=n%10;
        sum+=r;
        n/=10;
    }
    printf("The sum of digit %d is %d",tem,sum);
    return 0;
}

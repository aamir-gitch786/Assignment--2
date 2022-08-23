#include<stdio.h>
int main()
{
    int a,b,tem,tem1,tem2;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    tem1=a;
    printf("Enter the Seconde number:\n");
    scanf("%d",&b);
    tem2=b;
    tem=a;
    a=b;
    b=tem;
    printf("Befor swaing numbers: %d %d\n",tem1,tem2);
    printf("After swaing numbers: %d %d",a,b);
    return 0;

}

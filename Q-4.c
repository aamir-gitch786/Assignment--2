
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the Seconde number: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swaping numbers are: %d %d",a,b);
    return 0;

}

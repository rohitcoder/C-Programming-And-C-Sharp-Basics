#include<stdio.h>
int exchange(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
main()
{
    int a,b;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);
    exchange(&a,&b);
    printf("The values of a is %d and b is %d.\n",a,b);
}

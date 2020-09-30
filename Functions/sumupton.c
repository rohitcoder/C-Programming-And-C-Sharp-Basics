#include<stdio.h>
int sum(int);
main()
{
    int x,z;
    printf("Enter the value of x:\n");
    scanf("%d",&x);
    z=sum(x);
    printf("The sum of x numbers is:%d.\n",x,z);
}
int sum(n)
{
    int s;
    if(n==1)
        return(1);
    s=n+sum(n-1);
    return(s);
}


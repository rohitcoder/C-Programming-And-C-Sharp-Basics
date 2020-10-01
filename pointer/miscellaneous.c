#include<stdio.h>
int square(int x)
{
    return(x*x);
}
int cube(int x)
{
    return x*x*x;
}
int calculate(int (*p)(int),int n)
{
    return(p(n));
}
main()
{
    int ch,n,ans;
    printf("\n Press 1 for square");
    printf("\n Press 2 for cube");
    printf("\n Enter your choice:");
    scanf("%d",&ch);
    printf("\n enter number:");
    scanf("%d",&n);
    switch(ch)
    {
    case 1:
        ans=calculate(square,n);
        printf("\n Square is %d.",ans);
        break;
    case 2:
        ans=calculate(cube,n);
        printf("\n Cube is %d.",ans);
        break;
    }

}

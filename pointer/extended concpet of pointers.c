#include<stdio.h>
main()
{
    int x,*p,**q,***r;
    x=5;
    p=&x;
    q=&p;
    r=&q;

    printf("%d\t%d\t%d\t%d\n",*r,q,&p,x);
    printf("%d\t%d\t%d\t%d\n",**q,&r,&x,p);
    printf("%d\t%d\t%d\t%d\n",**r,*p,*&q,&q);
    printf("%d\t%d\t%d\t%d\n",***r,***&q,*&r,*&x);
    printf("%d\t%d\t%d\t%d\n",p,q,r,x);

}

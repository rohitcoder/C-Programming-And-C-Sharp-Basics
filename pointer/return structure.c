#include<stdio.h>
struct Book
{
    int bid;
    float rate;
    char name[25];
};
struct Book input();
main()
{
    struct Book b1;
    b1=input();
    printf("\n BookID=%d\nBook name=%s\nBook rate=%f",b1.bid,b1.name,b1.rate);
}
struct Book input()
{
    struct Book b;
    printf("\n Enter BookID,name,rate");
    scanf("%d",&b.bid);
    fflush(stdin);
    gets(b.name);
    scanf("%f",&b.rate);
    return b;
};



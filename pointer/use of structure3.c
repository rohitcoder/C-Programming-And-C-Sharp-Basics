/*Initialize structure variable before declaration*/
#include<stdio.h>
struct Book
{
    int bid;
    float rate;
    char name[20];
}b1;
int main()
{
    printf("Enter Book Id and name and rate:\n");
    scanf("%d",&b1.bid);
    fflush(stdin);                          //Clears buffer
    gets(b1.name);
    scanf("%f",&b1.rate);
    printf("\nBookID=%d\nBook name=%s\nRate=%f",b1.bid,b1.name,b1.rate);
    return 0;
}

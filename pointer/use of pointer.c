/*Store 10 values in array using pointer*/
void input(int *,int);
void display(int *,int);
main()
{
    int a[10];
    input(&a,10);
    display(a,10);                                  //Here, &a is &a[0] and same is a
}
void input(int *p, int size)
{
    int i;
    printf("Enter %d numbers:\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",p+i);
    }
}
void display(int *p,int size)
{
    int i;
    printf("\n Display %d number:\n",size);
    for(i=0;i<size;i++)
    {
        printf("%d\n",*(p+i));
    }
}

#include<stdio.h>
//#include<conio.h>
int add(int a,int b);
main(){
	int x,y,sum;
	printf("Enter the values for A & B: ");
	scanf("%d %d",&x, &y);
	sum=add(x,y);
	printf("%d",sum);
}
int add(int a, int b)
{
     int sum,carry; 
      if (b == 0) 
        return a;
      else
        sum = a^b; // add without carrying
        carry = (a&b) << 1; // carry, but don’t add
      return add(sum,carry); 
}
/*
in c sharp

class Program
{ 
  public int add(int a,int b)
 {
  int sum;
  int carry;
    if(b  == 0)
    {
    return a;
    }
    else
    {
    sum = a^b;
    carry = (a&b) << 1;
    return addd(sum,carry);
    } 
  }
  public static void Main(string[] args)
  {
   int x;
   int y;
   int sum;
   Console.WriteLine("Enter the values of A and B :");
   int a = Convert.ToInt32(Console.ReadLine());
   int b = Convert.ToInt32(Console.ReadLine());
   sum = add(x,y);
   Console.WriteLine(sum);


  }
}




*/

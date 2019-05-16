//For dynamic range as input
/*
#include<stdio.h>

main() {
	
	int count,n,sum=0;
	printf("Enter the value for n: ");
	scanf("%d" ,&n);
	for(count=1;count<=n;count++) {
		if(count%2==1){
		continue;
		}
		sum+=count;
	}
	printf("The sum of even number is %d" ,sum);
}
*/

//For fix range as input

#include<stdio.h>

main()
{
	int sum=0,count;
	for(count=1;count<=10;count++)
	{
		if(count%2==0)
		{
			sum+=count;
		}
	}
	printf("sum is %d" ,sum);
}

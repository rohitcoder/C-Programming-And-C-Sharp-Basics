#include<stdio.h>

main(){
	int inp,count;
	printf("Enter a number: ");
	scanf("%d" ,&inp);
	
	while(inp!=0){
		inp/=10;
		count++;
	}
	printf("Total digits of input is: %d",count);
}

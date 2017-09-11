#include<stdio.h>
#include<conio.h>
void main(){
	/* Check armstrong */
	int num,temp,sum=0,r;
	printf("\t Program by Rohit Kumar for checking number is Armstrong or not \t \t \t \n");
    printf("\n Please enter a number: ");
	scanf("%d",&num);
	temp = num;
	while(num>0){
		r=num%10;
		sum =  sum+(r*r*r);
		num = num/10; 
	}
	if(temp==sum){
		printf("Yes %d is Armstrong Number",temp);
	}else{
		printf("No %d is Not Armstrong Number",temp);
    }
}

#include<stdio.h>
#include<conio.h>
void main(){
	/* Print armstrong from 1 to 1000*/	
	printf("\t Program by Rohit Kumar for Printing all Armstrong From 1 to 1000 \t \t \t \n"); 
	int num,temp,sum,r,a;
    for(a=1;a<=1000;a++){ 
	num = a;
	sum=0;
	temp = a;
	while(num>0){
		r=num%10;
		sum =  sum+(r*r*r);
		num = num/10; 
	}  
	if(temp==sum){
		printf("%d is Armstrong Number \n",temp);
	}  
}
return 0;
}

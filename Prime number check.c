#include<stdio.h>

main() {
	
	int inp,chk,i;
	printf("Enter a number: ");
	scanf("%d",&inp);
	if (inp==1){
	printf("it is both");}
	else {
	for(i=2;i<=inp/2;++i){
		chk=inp%i;
		if(chk==0){
		printf("it is not prime");
		break;
		}else {
		printf("it is prime");
		break;
		}
		}
	}

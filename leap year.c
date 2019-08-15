#include<stdio.h>

main () {
	
	int year,chk;
	puts("This is used to check Leap year...");
	printf("Enter the year: ");
	scanf("%d" ,&year);
	year%=4;
	
	switch(year) {
		case 0: 
		
			printf("This year is leap year.");
		break;
		default:
			printf("This year isn't leap year.");
	}

}

#include<stdio.h>

main(){
	int i,a[5],smallest;
	printf("Enter the valir of i");
	for(i=0;i<5;i++) {
		scanf("%d" ,&a[i]);
	}
	printf("The array value are: ");
	for(i=0;i<5;i++) {
		printf("\n%d" ,a[i]);
	}
	smallest=a[0];
	for(i=1;i<5;i++) {
		if(a[i]<smallest) {
			smallest=a[i];
		}
	}
	printf("\n%d is the smallest." ,smallest);
}

#include<stdio.h>

main(){
	int i,a[5],largest;
	printf("Enter the valir of i");
	for(i=0;i<5;i++) {
		scanf("%d" ,&a[i]);
	}
	printf("The array value are: ");
	for(i=0;i<5;i++) {
		printf("\n%d" ,a[i]);
	}
	largest=a[0];
	for(i=1;i<=5;i++) {
		if(a[i]>largest) {
			largest=a[i];
		}
	}
	printf("\n%d is the largest." ,largest);
}

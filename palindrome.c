// idea of palindrome number is the reverse of number is the same as the original one

#include<stdio.h>

main() {
	int inp,mol,res=0,pal;
	scanf("%d",&inp);
	pal=inp;
	while (inp!=0) {
		mol=inp%10;
		inp/=10;
		res=res*10+mol;
	}
	if(res==pal) {
		printf("palindrome");
	}
	else {
		printf("Not palindrome");
	}
}

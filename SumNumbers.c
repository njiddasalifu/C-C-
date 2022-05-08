#include<stdio.h>
main() {
	int number, sum=0;
	do {
		printf("Enter a number:");
		scanf("%d",&number);
		sum+=number;
	}
		while(number!=0);
		printf("Sum = %d",sum);
}
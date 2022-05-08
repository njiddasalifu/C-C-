#include<stdio.h>
int main () {
	int i,  num, sum=0;
	printf("Enter a number to verify if it is a perfect number");
	scanf("%d",&num);
	/*calculate sum of all proper divisors*/
	for(i=1;i<=num/2;i++) {
		/*if i is a divisor of num*/
	if(num%i==0)
{
	sum +=i;
}
}
/*check whether the sum of proper divisors is equall to num*/
if(sum==num && num>0){
	printf("%d  is a PERFECT NUMBER", num); }
	else {
		printf("%d is not a PERFECT NUMBER", num);
	}
	return 0;
}

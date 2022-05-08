#include<stdio.h>
int main () {
	int r, c, a[100][100], b[100][100], sum[100][100], i, j;
	printf("Enter the number of rows(between 1 and 100)");
	scanf("%d",&r);
	printf("Enter the number of columns(between 1 and 100)");
	scanf("%d",&c);
	printf("\nEnter the elements of the 1st matrix");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++){
		printf("Enter the element a %d%d:",i+1,j+1);
		scanf("%d",&a[i][j]);
	}
	printf("\nEnter the elements of the 2nd matrix");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++){
		printf("Enter the element b %d%d:",i+1,j+1);
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<r;i++)
	for(j=0;j<c;j++){
		sum[i][j]=a[i][j] + b[i][j];
	}
	printf("\nSum of the Two matrices:\n");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++){
		printf("%d",sum[i][j]);
		if(j==c-1){
			printf("\n\n");
		}
	}
}

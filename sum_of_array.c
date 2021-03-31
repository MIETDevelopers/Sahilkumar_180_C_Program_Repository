#include<stdio.h>
int main(){
	int i,arr[10],sum=0;
	printf("Enter 10 element:");
	for(i=0;i<10;++i)
	scanf("%d",&arr[i]);
	for(i=0;i<10;++i)
	sum=sum+arr[i];
	printf("Sum of numbers is:%d",sum);
	return 0;
}
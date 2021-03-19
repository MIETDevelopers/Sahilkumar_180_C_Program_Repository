#include<stdio.h>
int main(){
	float breadth, length, area;
	printf("\n Enter the Breadth of rectangle :");
	scanf("%f" ,&breadth);
	printf("\n Enter the length of rectangle :");
	scanf("%f" ,&length);
	area=length*breadth;
	printf("\n Area of rectangle = %f", area);
	return 0;
}
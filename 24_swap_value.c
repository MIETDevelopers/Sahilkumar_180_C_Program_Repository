//swapping 2 numbers using call by value
#include<stdio.h>//preprocessor directive to include standard input and output header file
void swap(int,int);
int main()//main function begin
{
	int x,y;//deceleration
	printf("Enter the value of x and y\n");//print output after taking input from user
	scanf("%d%d",&x,&y);//scanf scan input from user 
	printf("Before Swapping\nx=%d\ny=%d\n",x,y);// printing output before swapping 
	swap(x,y);//swap used
	printf("After Swapping\nx=%d\ny=%d\n",x,y);//printing output after swapping
	return 0;//return statement
}//end of main function body
void swap(int a,int b)// value initilization
{
	int temp;
	temp=b;
	b=a;
	a=temp;
	printf("Value of a and b is %d %d\n",a,b);//print output after function call by value
}

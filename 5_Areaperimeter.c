//Author: Sahil kumar
//date:19/03/2021
//purpose of the program is to find the length, Breadth and Area of the rectangle.
#include<stdio.h> // preprocessor directive to include standard input and output header file.
int main(){ // main function body begin.
	float breadth, length, area;//decleration of variable.
	printf("\n Enter the Breadth of rectangle :");// printf function used for print the output of breadth of rectangle baseed on user input.
	scanf("%f" ,&breadth);// scanf function used for read the function.
	printf("\n Enter the length of rectangle :"); // printf function used for print the output of length of rectangle based on user input.
	scanf("%f" ,&length);// scanf function used for read the function.
	area=length*breadth;// finding the area by multiple the length and breadth.
	printf("\n Area of rectangle = %f", area);// printing the output of the area  after multiplying length and breadth.
	return 0;// return statement
}// main function body ends

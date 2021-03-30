//Author:Sahil kumar
//Date:29 march 2021
//purpose of the program is to add number until the user enter zero by using do while loop.
#include<stdio.h>  //preprocess directive to include standard input and output header file
int main(){  //main function body begin
	double number ,sum=0; //variable decleration
	// the body of the loop is executed at least once
	do
	{
		printf("Enter a number: ");//printing the output after takking the input from user
		scanf("%lf", &number);//scan the input from user 
		sum += number;
	}
	while(number !=0.0);//while loop executing
	printf("Sum=%.2lf",sum);//print the output after taking input from user
	return 0; //return statement
} 	// end of main function body
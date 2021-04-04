#include<stdio.h>//preprocessor directive to include standard input and output header file
int main(){//main function body begin
	int i,fact=1,number;//variable deceleration
	printf("Enter a number");//printing the output after taking input fron user
	scanf("%d",&number);//scanning input from the user
	 for(i=1;i<=number;i++){//using for loop 
	 fact=fact*i;//initilation
	 }//end of loop body
printf("Factorial of %d is:%d",number,fact);//printing output of factorial 
return 0;//return statement
}//end of main function body

//Author Sahil kumar
//date 25 march 2021
#include<stdio.h>//include standard input output header file
int main(){// main function body begin
	int i,num,n,large=0;// variable decleration
	printf("How many numbers: ");//printing output
	scanf("%d",&n);//scanning input
	for(i=0;i<n;i++){//for loop 
	   printf("\nEnter number %d:",i+1);//printing output 
	   scanf("%d",&num);//scanning the input
	   if(num>large)//if statement used
	   large=num;//initilization
	}//end of for loop 
	printf("\nThe Largest Number is %d",large);//printing the output for largest number
	return 0;// returned statement	
}// end of main function body

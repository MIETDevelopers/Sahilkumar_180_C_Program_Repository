#include<stdio.h>//preprocessor directive to include standard input and out put header file
int main(){//main function body begin
	int i,n,t1=0,t2=1,nextTerm;//variable deceleration
	printf("Enter the number of terms:");//printing output 
	scanf("%d",&n);// read the input after taking input from user
	printf("Fibonacci series:");//printing output of fibonacci series
	for (i=1;i<=n;++i){// for loop used
		printf("%d, ",t1);//printing output of t1
		nextTerm=t1+t2; //call from the user 
		t1=t2;//t1 is equal to t2
		t2=nextTerm;// in this we show t2 is equal to next term
	}// end of for loop 
return 0;// return statememt 
}//end of main function body

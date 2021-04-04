<<<<<<< HEAD
#include<stdio.h>
int main(){
	int num;
	printf("Enter an integer : ");
	scanf("%d", &num);
    if ( num%2 == 0)
     printf("%d is an even.", num);
    else
     printf("%d is an odd.",num);
    return 0;  
}
=======
#include<stdio.h>//include standard input and output header file
int main(){//main function body
	int num;//deceleartion
	printf("Enter an integer : ");// print output of integer depend on user input 
	scanf("%d", &num);// scanning the input 
    if ( num%2 == 0)//if statement use 
     printf("%d is an even.", num);// printing output if number input by user is even
    else//else statement use
     printf("%d is an odd.",num);//printing output if number input by user is odd 
    return 0; //return statement 
}// end of main function body
>>>>>>> 8d2ace86003ffc2d70af136e5fdcf27b5f949ed7

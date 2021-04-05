// Author:Sahil kumar 
//Date:2nd April 2021
// program to find the output by using arithmetic operator
#include<stdio.h>//include header file 

 int main(){// main function body begin 

   int a = 21;//value decleration
   int b = 10;// value decleration
   int c ;//finding value of c from a and b

   c = a + b;//finding value of c by using + operator
   printf("Line 1 - Value of c is %d\n", c );// printing the output for line 1  

   c = a - b;//finding value of c by using - operator
   printf("Line 2 - Value of c is %d\n", c );// printing the output for line 2

   c = a * b;//finding value of c by using * operator
   printf("Line 3 - Value of c is %d\n", c );// printing the output for line 3

   c = a / b;//finding value of c by using div operator
   printf("Line 4 - Value of c is %d\n", c );// printing the output for line 4

   c = a % b;//finding value of c by using % operator
   printf("Line 5 - Value of c is %d\n", c );//printing the output for line 5

   c = a++;
   printf("Line 6 - Value of c is %d\n", c );

   c = a--;
   printf("Line 7 - Value of c is %d\n", c );
   return 0;//returned statement
}//end of main function body

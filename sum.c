//Author:Sahil kumar
//Date: 16 march 2021
//purpose of the program is to find the sum of two numbers.
#include<stdio.h>// preprocesser directive to include standard input and output header file
int main(){// main function body begin.
  int number1, number2, sum;//variable decleration.
  scanf("%d %d", &number1, &number2);//scanf function used for scanning the input from user.
  sum=number1+number2;//In this we adding the number1 to number2 after takking input from user.
  printf("Sum of 2 numbers= %d", sum);//printing the output after the sum of two no after takking the input from user.
  return 0;//return statement.
}//end of main function body

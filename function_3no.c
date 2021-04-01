#include<stdio.h>// preprocess directive to include standard input and output header file

// functions declaration
float input();
float large(float a, float b, float c);
void display(float max);

// main function
int main()
{
   float num1, num2, num3, largest;//decleration

   num1 = input();
   num2 = input();
   num3 = input();

   largest = large(num1, num2, num3);
   display(largest);

   return 0;
}

// function for taking input from user
float input()
{
   float n;
   printf("Enter number: ");
   scanf("%f", &n);
   return n;
}

// function to find sum of two numbers
float large(float a, float b, float c)
{
   if(a>=b && a>=c) return a;
   else if(b>=a && b>=c) return b;
   else return c;
}

// function for displaying the result
void display(float max)
{
   printf("Largest number = %.2f",max);
}
#include <stdio.h>
//function start
double cal(double val1, double val2, char ope)
{
if(ope == '+')
{
printf("Addition of two numbers is %lf ", val1 + val2);
}
else if(ope == '-')
{
printf("Subtraction of two numbers is %lf ", val1 - val2);
}
else if(ope == '*')
{
printf("Multiplication of two numbers is %lf ", val1 * val2);
}
else if(ope == '/')
{
printf("Division of two numbers is %lf ", val1 / val2);
}
else
{
printf("Invalid operator");
}
} //function end

//main method start
void main()
{
double val1 , val2;
char ope;

printf("Enter First Number ");
scanf("%lf", &val1);

printf("Enter Second Number ");
scanf("%lf", &val2);

printf("Enter '+' for Add\n '-' for Sub\n '*' for Mul\n '/' for Div\n");
scanf(" %c", &ope);

cal(val1,val2,ope); //calling function

} //main end
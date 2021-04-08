// Author :Sahil kumar
//Date:24 march 2021
//purpose of the program is to find area of circle
#include<stdio.h>//preprocessor directive to include standard input and output header file
#define PI 3.14//value of pi decleartion
int main(){//main function body begins
    float radius,area;// variable deceleration
    /*printing the output after taking the input from user*/
    printf("Enter radius of circle\n");
    scanf("%f",&radius);//scanning the input from user
    area=PI*radius*radius;//formula to find area of circle
    printf("Area of circle is %f\n",area);//printing the output of the program 
    return 0;//return statement
}//end of main function body

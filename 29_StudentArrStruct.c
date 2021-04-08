//Author Sahil kumar
//date 31 march 2021
#include <stdio.h>//preprocessor directive to include standard input and output header file
struct student {//structure deceleration
    char firstName[50];//value initilization
    int roll;//variable decleration
    float marks;//variable decleration
} s[10];

int main() {// main function body begins
    int i;//decleration
    printf("Enter information of students:\n");// printing output

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");//printing output

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
//Author:Sahil kumar.
//Date:20 march 2021
//Purpose of the program is to find identify upper and lower case Vowel.
#include <stdio.h>//preprocessor directive to include standard input and output header file.

int main()//main function body beigns
{
    char ch;
    int lowercase_Vowel, uppercase_Vowel;//variables declaration

    printf("Please Enter an alphabet: \n");//printing the output after taking the the input from users
    scanf(" %c", &ch);//It read the input taken from users

    lowercase_Vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');// giving lowercase value to the program for output. 
    uppercase_Vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');// giving uppercase value to the program for output.

    if (lowercase_Vowel || uppercase_Vowel) {//In this we are not sure that the no enter by usee is vowel or constant.
    	printf("\n %c is a VOWEL.", ch);//printing the output if number entered by user is vowel.
	}
    else {
    	printf("\n %c is a CONSONANT.", ch);//printing the output after the else whether the no is vowel or constant depending upon user input.
	}
    return 0;//return statement
} //End of main function body

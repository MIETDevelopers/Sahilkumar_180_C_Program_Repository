//Author:Sahil kumar 
//Date 23 march 2021
// program is for finding upper case vowel and constant.
#include <stdio.h>//preprocessor directive to include standard input and output header file

int main()// main function body begins
{
    char ch;// varaiable decleration 
    int lowercase_Vowel, uppercase_Vowel;// decleration

    printf("Please Enter an alphabet: \n");//printing output
    scanf(" %c", &ch);//scanning input from the user

    lowercase_Vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    uppercase_Vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
//if  else statement use because we are not sure wheter the  no input by user is  vowel or constant
    if (lowercase_Vowel || uppercase_Vowel) {
    	printf("\n %c is a VOWEL.", ch);//printing the output if number entered by user id vowel
	}
    else {
    	printf("\n %c is a CONSONANT.", ch);//printing output if number entered by user is consontant
	}
    return 0; //returned statement
} // end of main function body

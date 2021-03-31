//Standard input and output
#include<stdio.h>

//Student strcture data type: User-Defined data type
struct Student{
	//Student structure Member variables
	int rollNumber;
	float engineeringDesign;
	float computerProgramming;
	float maths;
	float physics;
	float totalMarks;
};

int main(){
	//Declare studentMarks variable of Student strcture data type
	struct Student cseA2Student;
	cseA2Student.rollNumber=101;
	cseA2Student.engineeringDesign=9.5;
	cseA2Student.computerProgramming=10;
	cseA2Student.maths=10;
	cseA2Student.physics=10;
	cseA2Student.totalMarks=cseA2Student.engineeringDesign+cseA2Student.computerProgramming+cseA2Student.maths+cseA2Student.physics;

	printf("Ayush's (with rollNumber: %d) total marks=%f",cseA2Student.rollNumber,cseA2Student.totalMarks);
}

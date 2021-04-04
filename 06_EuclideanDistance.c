#include<stdio.h>//include standard header file
#include<math.h>//include math library
int main(){// main function body
	float x1,y1,x2,y2,distance;//decleration
	printf("Enter point1(x1,y1)\n");//printing output value of point 1
	scanf("%f%f",&x1,&y1);// read entered value by user
	printf("Enter point2(x2,y2)\n");//printing output value of point 2
	scanf("%f%f",&x2,&y2);//read entered value by user
	distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));//using euclidean distance formula
	printf("Distance between(%f,%f)and(%f,%f) is %f\n",x1,y1,x2,y2,distance);//printing the output
	return 0;//return statement

}// main function body ends

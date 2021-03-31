  #include<stdio.h>
int main(){
	double a, b, temp;
	printf("Enter two digits: ");
	scanf("%lf %lf", &a, &b);
	 temp = a;
	 a = b;
	 b = temp;

	 printf("After swapping: %lf % lf", a, b);
	 return 0;
}
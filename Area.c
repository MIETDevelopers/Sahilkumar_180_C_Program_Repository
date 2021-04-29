#include<stdio.h>
#define PI 3.14
int main(){
   float radius,area;
   printf("radius of circle\n");
   scanf("%f",&radius);
   area =PI*radius*radius;
   printf("Area of circle is %f\n",area);
   return 0;
}
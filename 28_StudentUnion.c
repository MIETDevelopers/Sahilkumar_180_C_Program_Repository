#include<stdio.h>
#include<string.h>
 union student{ 
 	char name[20];
 	char subject[20];
 	float percentage;
 };
 int main()
 {
 	union student record1;
 	union student record2;
		strcpy(record1.name,"ankit");
		strcpy(record1.subject,"math");
		record1.percentage=86.50;
		printf("Union record1 values example\n");
		printf("Name :%s\n",record1.name);
		printf("Subject :%s\n",record1.subject);
		printf("Percentage :%f\n\n",record1.percentage);
		printf("Union record2 values example\n");
		strcpy(record2.name,"sobit");
		printf("Name : %s\n",record2.name);
		strcpy(record2.subject,"physics");
		printf("Subject :%s\n",record2.subject);
		record2.percentage=99.50;
		printf("percentage :%f\n\n",record2.percentage);
		return 0;
 }
#include<stdio.h>
#include<string.h>

// function for creating and writing in file
void create_marks_csv(char *filename){
FILE *fp;
int i, count, id, micro, dcn, ds, rd;

printf("\n Creating %s.csv file",filename);
filename=strcat(filename,".csv");

fp=fopen(filename,"w+");

fprintf(fp,"Student Id, Microprocessor, RDMBMS, DCN, DS");
printf("How many student's marks do you want to save?");
scanf("%d", &count);

for(i = 1; i <= count; i++){
 printf("Enter student id");
 scanf("%d", &id);
 printf("Enter Microprocessor marks");
 scanf("%d", &micro);
 printf("Enter RDBMS marks");
 scanf("%d", &rd);
 printf("Enter DCN marks");
 scanf("%d", &dcn);
 printf("Enter DS marks");
 scanf("%d", &ds);

fprintf(fp,"\n%d,%d,%d,%d,%d",id,micro,rd,dcn,ds);
}
fclose(fp);

printf("\n %sfile created",filename);
}

//main method
int main(){
 char str[100];
 clrscr();
 printf("\n Enter the filename :");

gets(str);
 create_marks_csv(str);

return 0;
}

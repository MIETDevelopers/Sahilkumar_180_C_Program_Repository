 #include<stdio.h>//preprocessor directive to include standard input and output header file
  int main(){//main function body begins
  int a,i,f;// variable deceleration
  printf("Enter a number:");//printing the output after taking the input from user
  scanf("%d",&a);//scanning the input from user
  f=0;// assigned value
  i=2;//assigned value
  while(i<=a/2){//while loop used
  	if(a%i==0){//if statement used
  		f=1;
  		break;//break statement used
  	}
  	i++;
  }
  if(f==0)//if else statement used because we are not sure whether the number used are prime or not prime 
   printf("Prime Number");// printing the output if number is input by user is prime 
  else
   printf("Not Prime Number");//printing the output if number input by user is not prime
  return 0;//return statement   
  }//end of main function body

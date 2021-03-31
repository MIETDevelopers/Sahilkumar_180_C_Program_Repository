#include<stdio.h>//preprocessor directive to include standard input and out header file 

int main(void) //main function body begin 
{
  int c, d, p, q, m, n, k, tot = 0; //decelration
  int fst[10][10], sec[10][10], mul[10][10];// decelerationof elements.

  printf(" Please insert the number of rows and columns for first matrix \n ");//print the output of first rows and coloumns of matrix 
  scanf("%d%d", &m, &n);//scanning the input

  printf(" Insert your matrix elements : \n ");//printing the output 
  for (c = 0; c < m; c++)// for loop used
    for (d = 0; d < n; d++)// for loop used
      scanf("%d", &fst[c][d]);//scanning the input
 
  printf(" Please insert the number of rows and columns for second matrix\n");//printing the out put of second matrix
  scanf(" %d %d", &p, &q);//scanning the input from user

  if (n != p)//if else statement used 
    printf(" Your given matrices cannot be multiplied with each other. \n ");//printing the output
  else
  {
    printf(" Insert your elements for second matrix \n ");//printing the out put for second matrix
 
    for (c = 0; c < p; c++)//for loop for 1st 
      for (d = 0; d < q; d++)//for loop second
        scanf("%d", &sec[c][d] );//scaning the input

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          tot = tot + fst[c][k] * sec[k][d];
        }
        mul[c][d] = tot;
        tot = 0;
      }
    }
 
    printf(" The result of matrix multiplication or product of the matrices is: \n ");// printing the total output after multipication 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d \t", mul[c][d] );//printing the out put multipaction
      printf(" \n ");
    }
  }
  return 0;//return statement
}//end of main function body

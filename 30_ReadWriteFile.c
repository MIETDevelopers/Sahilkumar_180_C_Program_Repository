//Author:Sahil kumar
//date:29 march 2021
#include <stdio.h>//preprocessor directive to include standard input and output header file
#include <string.h>//preprocessor directive to include string header file
#include <stdlib.h>//preprocessor directive to include standard library header file


void read_csv(int row, int col, char *filename, double **data){//initilization data type
FILE *file;
file = fopen(filename, "r");

int i = 0;
    char line[4098];//vlue of char initilized
while (fgets(line, 4098, file) && (i < row))//while loop used
    {
    // double row[ssParams->nreal + 1];
        char* tmp = strdup(line);

    int j = 0;
    const char* tok;
    for (tok = strtok(line, "\t"); tok && *tok; j++, tok = strtok(NULL, "\t\n"))//for loop used
    {
        data[i][j] = atof(tok);
        printf("%f\t", data[i][j]);
    }
    printf("\n");

        free(tmp);
        i++;
    }
}

int main(int argc, char const *argv[]) // varaiable decleration
{
/* code */
if (argc < 3){
printf("Please specify the CSV file as an input.\n");
exit(0);
}

int row     = atoi(argv[1]);
int col     = atoi(argv[2]);
char fname[256]; strcpy(fname, argv[3]);

double **data;
data = (double **)malloc(row * sizeof(double *));
for (int i = 0; i < row; ++i){
data[i] = (double *)malloc(col * sizeof(double));
}

read_csv(row, col, fname, data);

return 0;
}
#include <stdio.h>
#include <stdlib.h>


/*Write a program that multiplies a 2D matrix with a 1D array. Structure the program in two functions as
follows:
- The main() function. Create a 2D matrix and a 1D array here.
Hint: Initialize the arrays by assigning values like int array[] = {1,2,3,4,5};
- A function called multiply(), which takes as parameters a matrix(i.e. a 2D array), a 1D
array, and any other parameters you consider necessary. Hint: array sizes may be helpful to
have as arguments!
In your program, the main function callsthe function multiply. Multiply the 2D and 1D arrays together,
if they are the correct size. If they are not the correct size, then display an error message. Store the
multiplication result in the first column of the 2D matrix passed as a parameter to multiply() and print
out the contents of the matrix from main() (NOT from the multiplication function).*/

int multiply(int **matrix, int r, int c, int *array, int l) {

    //  Checking the dimension
    if(c != l) {
        printf("Error in dimensions!");
        return 1;
    }

    //  Multiply
    for(int j = 0; j < c; j++) {
        for(int i = 0; i < r; i++) {
            matrix[i][j] *= array[j];
        }
    }

    for(int i = 0; i < r; i++) {
        matrix[i][0] += matrix[i][1];
    }

    return 0;
}

void cleanMatrix(int **matrix, int r, int *array) {
    for(int i = 0; i <r; i++) {
        free(matrix[i]);
    }

    free(matrix);
    free(array);
}

int main() {
    int** matrix;
    int r = 3;
    int c = 2;

    //  Memory allocation for 2D array
    matrix = (int **) malloc (sizeof(int *) * r);
    for (int i = 0; i < r; i++) {
        matrix[i] = (int*) malloc (sizeof(int) * c);
    }

    //  Entering values for the 2D array
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[1][0] = 3;
    matrix[1][1] = 4;
    matrix[2][0] = 5;
    matrix[2][1] = 6;

    //  Creating 1D array
    int l = c;
    int *array = (int *) malloc(sizeof(int) * l);

    array[0] = 1;
    array[1] = -1;

    int isError = multiply(matrix, r, c, array, l);

    if(isError) {
        cleanMatrix(matrix, r, array);
        return isError;
    }

    //  Print the output
    for(int i = 0; i < r; i++) {
        printf("%d\n",matrix[i][0]);
    }

    cleanMatrix(matrix, r, array);


    return 0;
}

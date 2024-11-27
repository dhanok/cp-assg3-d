/*
            ASSIGNMENT 3

  TITLE         : WAP to Find transpose of matrix
  NAME          : Shaikh Abdul Rahim
  CLASS         : FE
  UIN           : 241P095

  Task Given By : Ansari Mohammed Arham Mohammad Suhail
  Roll No       : 63
  UIN           : 241P134

*/
#include <stdio.h>

#define MAX 10  // Define a maximum size for the matrix

void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void transposeMatrix(int matrix[MAX][MAX], int transposed[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[MAX][MAX], transposed[MAX][MAX];
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    inputMatrix(matrix, rows, cols);

    printf("\nOriginal Matrix:\n");
    printMatrix(matrix, rows, cols);

    transposeMatrix(matrix, transposed, rows, cols);

    printf("\nTransposed Matrix:\n");
    printMatrix(transposed, cols, rows);

    return 0;
}
/* OUTPUT

Enter the number of rows: 2
Enter the number of columns: 2
Enter the elements of the matrix:
Element [1][1]: 2
Element [1][2]: 3
Element [2][1]: 4
Element [2][2]: 5

Original Matrix:
2 3
4 5

Transposed Matrix:
2 4
3 5

*/


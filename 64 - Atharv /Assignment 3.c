/*
  Roll No.: 64 
  Student Name: NARKAR ATHARV JAGDISH 
  Program Title: WAP to calculate determinant of a 3 x 3 matrix 

  Task Given By:
    - Roll No. of Assignee: 50
    - Assignee Name: KADRI MOHAMMED AABAN JAVID
*/
  
#include <stdio.h>

// Function to calculate the determinant of a 3x3 matrix
int determinant(int matrix[3][3]) {
    int det = 0;
    
    // Apply the formula for the determinant of a 3x3 matrix
    det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) 
        - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
        + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
    
    return det;
}

int main() {
    int matrix[3][3];
    
    // Input the 3x3 matrix
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate the determinant
    int det = determinant(matrix);
    
    // Output the result
    printf("The determinant of the matrix is: %d\n", det);
    
    return 0;
}

/* OUTPUT
Enter the elements of the 3x3 matrix:
Enter element at [0][0]: 1
Enter element at [0][1]: 2
Enter element at [0][2]: 3
Enter element at [1][0]: 4
Enter element at [1][1]: 5
Enter element at [1][2]: 6
Enter element at [2][0]: 7
Enter element at [2][1]: 8
Enter element at [2][2]: 9
The determinant of the matrix is: 0

*/
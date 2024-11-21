/*
Roll No.:39
  Student Name:Zoya Siddiqui
  Program Title:To calculate the area of a square

  Task Given By:
    - Roll No. of Assignee: 43
    - Assignee Name:Shravani Gamare
*/

#include <stdio.h>

int main() {
    float side, area;


    printf("Enter the length of the side of the square: ");
    scanf("%f", &side);

    area = side * side;

    printf("The area of the square is: %.2f\n", area);

    return 0;
}

/*
Output:
Enter the length of the side of the square: 3
The area of the square is: 9.00

Process returned 0 (0x0)   execution time : 4.586 s
Press any key to continue.
*/

/*

  Roll No.:43
  Student Name:Shravani Gamare
  Program Title:To calculate sum and average of three number

  Task Given By:
    - Roll No. of Assignee: 39
    - Assignee Name:Zoya Siddiqui
*/

#include <stdio.h>

int main() {
    float num1, num2, num3, sum, average;


    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);


    sum = num1 + num2 + num3;


    average = sum / 3;


    printf("The sum of the three numbers is: %.2f\n", sum);
    printf("The average of the three numbers is: %.2f\n", average);

    return 0;
}

/*
Output:
Enter the first number: 7
Enter the second number: 21
Enter the third number: 14
The sum of the three numbers is: 42.00
The average of the three numbers is: 14.00

Process returned 0 (0x0)   execution time : 14.241 s
Press any key to continue.
*/

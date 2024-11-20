/*
  Roll No.     :-19
  UIN          :-241P088
  Student Name :-Shaikh Alkaish Husain
  Program Title:-WAP to create a Multiplication of Table by user

  Task Given By:
    - Roll No. of Assignee:-16
    - UIN of Assignee :-241P085
    - Assignee Name :-Sohan Choudary
*/

#include <stdio.h>

int SIZE = 10;  // The size of the multiplication table

// Function to generate multiplication table
void generateMultiplicationTable(int *table, int number) {
  for (int i = 0; i < SIZE; i++) {
    table[i] = number * (i + 1);  // Calculate the multiplication value
  }
}

int main() {
  int number;
  int multiplicationTable[SIZE];
  printf("\t\t\t\t\t*****Multiplication of Table*****\n");

  // Enter Any Number
  printf("Enter a number to generate its multiplication table:- ");
  scanf("%d", &number);

  // Generate multiplication table
  generateMultiplicationTable(multiplicationTable, number);

  // Display the Multiplication table
  printf("Multiplication table for %d:\n", number);
  for (int i = 0; i < SIZE; i++) {
    printf("%d x %d = %d\n", number, i + 1, multiplicationTable[i]);
  }

  return 0;
}
/*
Output:-
                                        *****Multiplication of Table*****
Enter a number to generate its multiplication table:- 5
Multiplication table for 5:
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50*/

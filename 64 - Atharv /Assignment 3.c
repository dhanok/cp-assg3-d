/*
  Roll No.: 64 
  Student Name: NARKAR ATHARV JAGDISH 
  Program Title: Write a program to Count the Occurrences of an Element in an Array

  Task Given By:
    - Roll No. of Assignee: 50
    - Assignee Name: KADRI MOHAMMED AABAN JAVID
*/
  
  #include <stdio.h>

int main() {
    int n, i, count = 0, num;
    
    // Ask for the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Declare the array
    int arr[n];
    
    // Input the array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Ask for the number to count
    printf("Enter the number to count occurrences: ");
    scanf("%d", &num);
    
    // Count occurrences
    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    
    // Display the result
    printf("The number %d appears %d times.\n", num, count);
    
    return 0;
}

/* OUTPUT
Enter the number of elements: 5
Enter 5 integers:
1
2
3
1
2
Enter the number to count occurrences: 2
The number 2 appears 2 times.

*/
/*
  Roll No.: 38
  Student Name: Abdullah Yunus Shaikh
  Program Title: Temperature conversion tool

  Task Given By: Subhaan Parkar
    - Roll No. of Assignee: 21
    - Assignee Name: Subhaan Parkar
*/

#include <stdio.h>

int main() {
    float temp, outputTemp;
    char unit;

    printf("Enter a temperature: ");
    scanf("%f", &temp);

    // Ask the user whether they want to convert to Celsius or Fahrenheit
    printf("Enter C to convert to Celsius, or F for Fahrenheit: ");
    scanf(" %c", &unit);  // The space before %c is to consume any leftover newline character

    // Perform conversion based on user's choice
    if (unit == 'C' || unit == 'c') {
        // Convert Fahrenheit to Celsius
        outputTemp = (temp - 32) * 5.0 / 9.0;
        printf("%.2f Fahrenheit is equivalent to %.2f Celsius\n", temp, outputTemp);
    } else if (unit == 'F' || unit == 'f') {
        // Convert Celsius to Fahrenheit
        outputTemp = (temp * 9.0 / 5.0) + 32;
        printf("%.2f Celsius is equivalent to %.2f Fahrenheit\n", temp, outputTemp);
    } else {
        // Invalid input
        printf("Invalid unit entered! Please enter C or F.\n");
    }

    return 0;
}
    /*
    OUTPUT:
    Enter a temperature: 120
    Enter C to convert to Celsius, or F for Fahrenheit: c
    120.00 Fahrenheit is equivalent to 48.89 Celsius
    */

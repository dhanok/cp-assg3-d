/*
  Roll No.  :  29
  Program Title   :  Fahrenheit to Celsius or Celsius to
                     Fahrenheit converter.

  Task Given By   :
  -Roll No. of Assignee  : 46
  -Assignee Name  : Abdul Nafea Nakade
  */


#include <stdio.h>

int main() {
    float temperature;
    int choice;

    // Ask the user which conversion they want
    printf("Select the conversion type:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Fahrenheit to Celsius
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        // Conversion formula: (F - 32) * 5/9 = C
        printf("%.2f Fahrenheit is %.2f Celsius\n", temperature, (temperature - 32) * 5 / 9);
    }
    else if (choice == 2) {
        // Celsius to Fahrenheit
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        // Conversion formula: (C * 9/5) + 32 = F
        printf("%.2f Celsius is %.2f Fahrenheit\n", temperature, (temperature * 9 / 5) + 32);
    }
    else {
        printf("Invalid choice! Please choose either 1 or 2.\n");
    }

    return 0;
}

/*
Select the conversion type:
1. Fahrenheit to Celsius
2. Celsius to Fahrenheit
Enter your choice (1 or 2): 1
Enter temperature in Fahrenheit: 78
78.00 Fahrenheit is 25.56 Celsius


Select the conversion type:
1. Fahrenheit to Celsius
2. Celsius to Fahrenheit
Enter your choice (1 or 2): 2
Enter temperature in Celsius: 54
54.00 Celsius is 129.20 Fahrenheit

*/


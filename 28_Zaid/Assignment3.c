/*
Assignment No-3
Task Name : Find The BMI of the user when user enters height and weight and find 
his BMI Category, Merits & Demerits, How to overcome Unhealthy BMI,Ideal Weight 
with Respect to height 
Name: Rizvi Zaid
Roll No.:28
UIN NO : 241P097
Branch/Div : Comp/D-2

Task Given By: Abhay Gaud 
Roll No. of Assignee: 03
UIN NO. of Assignnee : 241P070
*/

#include <stdio.h>

void calculateBMI(float weight, float height) {
    float bmi = weight / (height * height);  // BMI formula: weight (kg) / height (m)^2
    printf("\nYour BMI is: %.2f\n", bmi);

    // BMI Categories and Conditions using if-else ladder
    if (bmi < 18.5) {
        printf("Category: Underweight\n");
        printf("Merit: Lower risk of heart disease.\n");
        printf("Demerit: Weak immune system, malnutrition, risk of osteoporosis.\n");
        printf("Advice: Eat a healthy, calorie-rich diet. Exercise to gain muscle mass.\n");
    }
    else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("Category: Normal weight\n");
        printf("Merit: Lower risk of chronic diseases such as heart disease, diabetes.\n");
        printf("Demerit: None.\n");
        printf("Advice: Maintain a balanced diet and exercise regularly.\n");
    }
    else if (bmi >= 25 && bmi <= 29.9) {
        printf("Category: Overweight\n");
        printf("Merit: Moderate health risk.\n");
        printf("Demerit: Higher risk of developing heart disease, hypertension, diabetes.\n");
        printf("Advice: Adopt a healthy diet and increase physical activity.\n");
    }
    else {
        printf("Category: Obesity\n");
        printf("Merit: N/A.\n");
        printf("Demerit: High risk of heart disease, diabetes, high blood pressure, joint problems.\n");
        printf("Advice: Consult a healthcare provider for weight management strategies.follow a balanced diet.\n");
    }
}

float calculateIdealWeight(float height, char gender) {
    float idealWeight;

    if (gender == 'M' || gender == 'm') {
        // Ideal weight formula for Men: IBW = 22 × (height in meters)^2
        idealWeight = 22 * (height * height);
    } else if (gender == 'F' || gender == 'f') {
        // Ideal weight formula for Women: IBW = 22 × (height in meters - 0.10)^2
        idealWeight = 22 * ((height - 0.10) * (height - 0.10));
    } else {
        printf("Invalid gender input!\n");
        return -1;
    }

    return idealWeight;
}

int main() {
    float weight, height;
    char gender;

    // Input weight, height and gender from the user
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);
    printf("Enter your gender (M for Male, F for Female): ");
    scanf(" %c", &gender);  // Space before %c to consume the newline character from the previous input

    // Calculate and display BMI
    calculateBMI(weight, height);

    // Calculate and display Ideal Weight
    float idealWeight = calculateIdealWeight(height, gender);
    if (idealWeight != -1) {
        printf("\nIdeal weight for your height (according to the formula): %.2f kg\n", idealWeight);
    }

    return 0;
}

/* Output 
Enter your weight in kilograms: 72
Enter your height in meters: 1.82
Enter your gender (M for Male, F for Female): M

Your BMI is: 21.74
Category: Normal weight
Merit: Lower risk of chronic diseases such as heart disease, diabetes.
Demerit: None.
Advice: Maintain a balanced diet and exercise regularly.

Ideal weight for your height (according to the formula): 72.87 kg
*/
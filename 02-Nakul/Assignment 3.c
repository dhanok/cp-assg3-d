/*
Roll No.     : 02
Program Title: WAP to get students name,
               marks of 5 subjects,their
               average and grade.
Student Name :Nakul Lalit Vishwakarma

Task Given By:
  -Roll No. of Assignee: 37
  -Assignee Name: Tausif Raghib Akram Ansari
*/
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int marks[5];
    float average;
    char grade;
};

void calculateAverageAndGrade(struct Student *s) {
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += s->marks[i];
    }
    s->average = total / 5.0;

    if (s->average >= 90) {
        s->grade = 'A';
    } else if (s->average >= 75) {
        s->grade = 'B';
    } else if (s->average >= 50) {
        s->grade = 'C';
    } else {
        s->grade = 'F';
    }
}

int main() {
    struct Student s;

    printf("Enter student's name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0'; // Remove newline character

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &s.marks[i]);
    }

    calculateAverageAndGrade(&s);

    printf("\nStudent Report");
    printf("\n--------------");
    printf("\nName: %s", s.name);
    printf("\nAverage Marks: %.2f", s.average);
    printf("\nGrade: %c", s.grade);

    return 0;
}
/*
Output
Enter student's name:Raj
Enter marks for 5 subjects:
Subject 1:90
Subject 2:90
Subject 3:90
Subject 4:90
Subject 5:90

Student Report
--------------
Name:Raj
Average Marks:90
Grade:A
*/
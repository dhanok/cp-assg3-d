/*
  Roll No.: 23
  Student Name: SHAZ ZAHRA ZAIDI.
  Program Title: WAP To Find and Print Area, Perimeter, Diagonal and Pattern 
                 of Square/Rectangle based on user input.

  Task Given By:  
    - Roll No. of Assignee: 54
    - Assignee Name: DANISH SAYED.
*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main () {
    //defining variables
    int l,b,area,peri;
    char x;
    float diag;
    //taking side input from user
    printf("\t\tWelcome to 'All about Square & Rectangle'!!\n\n");
    s:
    start:
    printf("Enter length : ");
    scanf("%d", &l);
    printf("Enter breadth : ");
    scanf("%d", &b);
    if ((l<=0)||(b<=0)) {
        printf("Invalid Input!Enter a positive value.\n\n");
        goto start;
    }//conditions for square
    if (l==b) {
        area = l*l ;
        peri = 4 * l ;
        diag = sqrt(2)*l;
        printf("%d = %d\nTherefore,it's a SQUARE.\n",l ,b);
        printf("Area of the Square is %d.\n", area);
        printf("Perimeter of the Square is %d.\n", peri);
        printf("Diagonal of the Square is %.3f.\n", diag);
        printf("Printing %d x %d Square pattern.\n",l, b);
        for(int i=1; i<=l; i++){
                for(int j=1; j<=b; j++) {
                        printf("* ");
                }
                printf("\n");
        }
        //asking user if they want to continue
        x = getchar ();
        printf("Do you want to continue ?");
        scanf("%c",&x);

        if (x == 'N') {
                printf("Exiting! Thank you!");
        } else {
        printf("GREAT! Let's Continue.\n");
        goto s;
        }
    } else {
        //conditions for rectangle
        area = l*b;
        peri = 2*(l+b);
        diag = (l*l + b*b);
        printf("%d != %d\nTherefore,it's a RECTANGLE.\n",l ,b);
        printf("Area of the Rectangle is %d.\n", area);
        printf("Perimeter of the Rectangle is %d.\n", peri);
        printf("Diagonal of the Rectangle is %.3f.\n", diag);
        printf("Printing %d x %d Rectangle pattern.\n", l, b);
        for(int i=1; i<=l; i++){
                for(int j=1; j<=b; j++) {
                        printf("* ");
                }
                printf("\n");
        }
        //asking user if they want to continue
        x = getchar ();
        printf("Do you want to continue ?");
        scanf("%c",&x);
        if (x == 'N') {
                printf("Exiting! Thank you!");
        } else {
        printf("GREAT! Let's Continue.\n");
        goto s;
        }
    }
    return 0;
}
/*                       [OUTPUT]
             Welcome to 'All about Square & Rectangle'!!

Enter length : 4
Enter breadth : 4
4 = 4
Therefore,it's a SQUARE.
Area of the Square is 16.
Perimeter of the Square is 16.
Diagonal of the Square is 5.657.
Printing 4 x 4 Square pattern.
* * * *
* * * *
* * * *
* * * *
Do you want to continue ?Y
GREAT! Let's Continue.
Enter length : -2
Enter breadth : 0
Invalid Input!Enter a positive value.

Enter length : 2
Enter breadth : -4
Invalid Input!Enter a positive value.

Enter length : 5
Enter breadth : 9
5 != 9
Therefore,it's a RECTANGLE.
Area of the Rectangle is 45.
Perimeter of the Rectangle is 28.
Diagonal of the Rectangle is 106.000.
Printing 5 x 9 Rectangle pattern.
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *
Do you want to continue ?N
Exiting! Thank you!
*/

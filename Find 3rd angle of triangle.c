/*
  Roll No.: 50
  Student Name: Mohammed Aaban kadri 
  Program Title: WAP for find the third angle of triangle

  Task Given By:
    - Roll No. of Assignee: 64
    - Assignee Name:  NARKAR ATHARV JAGDISH 
*/
#include<stdio.h>
int main()
{
    int ang1, ang2, ang3;
    printf("Input two angles of triangle separated by comma");
    scanf("%d,%d",&ang1,& ang2);
    
    ang3 = 180 - (ang1 + ang2);
    
    printf("Third angle of triangle:%d\n",ang3);
    
    return 0;
}

/* OUTPUT
Input two angles of triangle separated by comma90,50
Third angle of triangle:40

*/
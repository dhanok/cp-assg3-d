/*
  Roll No.: 33
  Student Name:Ansari Maaz Mohd Amin
  Program Title: WAP to find the Armstrong no. 

  Task Given By: 
    - Roll No. of Assignee: 15
    - Assignee Name: Mohammed Aamir Sameer Khan 
*/
#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    printf("Enter a number\n");
    scanf("%d",&num);
    int og = num;
    int rem;
    while (num > 0)
    {
        rem = num % 10;
        sum =sum+(rem*rem*rem);
        num=num/10;
    }
    if (og ==sum){
        printf("armstrong num");
    }
    else {
        printf("not an armstrong num");
    }
    return 0;
}

/*
Enter a number
10
not an armstrong num
Enter a number
153
armstrong num
*/
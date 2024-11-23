/*
NAME = ANISH THAKUR
UIN  = 241P104
ROLL\.no= 35
TOPIC = TO PRINT FIRST N NUMBER OF FIBONACCI SERIES

NAME OF PATENER = PRIYANSH GANGAN
UIN             = 241P101
ROLL . NO       = 32*/


#include<stdio.h>

int main()
{
    int n;
     int f1,f2,fn;

    printf("\t\t\t\t***FINDING THE FIBONACCI SERIES***");

    printf("\n Enter number of terms\n");

    scanf("%d",&n);

    f1=0;

    printf("%d ",f1);

    f2=1;

    printf("%d ",f2);

    for(int i=3;i<=n;i++)

    {

        fn=f1+f2;
        printf("%d ",fn);

        f1=f2;

        f2=fn;
    }
           return 0;
}


  /* OUTPUT
                   ***FINDING THE FIBONACCI SERIES***
 Enter number of terms
12
0 1 1 2 3 5 8 13 21 34 55 89
*/

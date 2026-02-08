#include <stdio.h>
int main()
{

// Problem 1: Day Name Finder
    
    int n;
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;

    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;

    default:
        printf("Invalid Day");
        break;
    }





 //Problem 2: Simple Calculator

    int a, b;
    char oper;

    printf("Enter the operator : ");
    scanf("%c", &oper);

    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);

    switch (oper)
    {

    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '/':
        if (b != 0)
        {
            printf("%d / %d = %d", a, b, a / b);
        }
        else
        {
            printf("Not a valid number");
        }
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    default:
        printf("Invalid Operator");
    }





   //Problem 3: Grade Checker

char a;
printf("Enter any  Grade Charecter : ");
scanf(" %c", &a);

switch(a){

case 'A':
printf("Excellent");
break;

case 'B':
printf("Good");
break;

case 'C':
printf("Average");
break;

case 'D':
printf("Poor");
break;

case 'F':
printf("Fail");
break;

default : printf("Invalid Grade");

}




    

    return 0;

}



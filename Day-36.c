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






//Problem 4: Month Days Counter

int month;
printf("Enter any month number : ");
scanf("%d",&month);

switch(month){

case 1:
printf("31 Days");
break;

case 2:
printf("28 Days");
break;

case 3:
printf("30 Days");
break;

case 4:
printf("31 Days");
break;

case 5:
printf("30 Days");
break;

case 6:
printf("31 Days");
break;

case 7:
printf("30 Days");
break;

case 8:
printf("31 Days");
break;

case 9:
printf("30 Days");
break;

case 10:
printf("31 Days");
break;

case 11:
printf("30 Days");
break;

case 12:
printf("31 Days");
break;

default: printf("Invalid Month");

}




    // Problem 5: Menu Based Program

    int n;
    printf("Enter any number 1-5 : ");
    scanf("%d", &n);

    switch (n)
    {

    case 1:
        printf("Check balance\n");
        break;

    case 2:
        printf("Deposit Balance\n");
        break;

    case 3:
        printf("Withdraw Balance\n");
        break;

    case 4:
        printf("Transfer Money\n");
        break;

    case 5:
        printf("Exit\n");
        break;

    default:
        printf("Not a valid number");
    }


    

    

    return 0;

}





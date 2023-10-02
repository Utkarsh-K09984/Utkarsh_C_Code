// QUESTION 32
// Write a C Program to Make a Simple Calculator Using Switch Case


#include<stdio.h>

int main () {
    char operation;
    double n1 , n2;
    printf("enter the operation (+,-,*,/,=) :");
    scanf("%c",&operation);
    printf("enter the two numbers : ");
    scanf("%lf %lf",&n1,&n2);
    switch(operation)
    {
    case '+':
        printf("%lf + %lf = %lf",n1,n2,n1 + n2);
        break;
    
    case '-':
        printf("%lf - %lf = %lf",n1,n2,n1 - n2);
        break;
    
    case '*':
        printf("%lf * %lf = %lf",n1,n2,n1 * n2);
        break;

    case '/':
        printf("%lf / %lf = %lf",n1,n2,n1 / n2);
        break;

    case '=':
        if (n1==n2){
            printf("both numbers are equal !");
        }
        else{
            printf("both numbers are not equal");
        }

    }
    return 0 ;

}
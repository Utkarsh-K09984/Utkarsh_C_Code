// QUESTION 16
// Program for Finding Greater Between Two Number



#include<stdio.h>

int main (){
    int num1 , num2 ;
    printf("Enter the first number : ");
    scanf("%d",&num1);

    printf("Enter the second number : ");
    scanf("%d",&num2);

    if (num1>num2){
        printf("%d is greater ",num1);
    }
    else{
        printf("%d is greater ",num2);
    }

    return 0 ;
}
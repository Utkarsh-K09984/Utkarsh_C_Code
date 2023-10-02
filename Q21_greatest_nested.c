// QUESTION 21
// Largest of Three Numbers in C Using Nested if Else


#include<stdio.h>

int main () {
    int num1,num2,num3,greatest;
    
    printf("Enter the first number : ");
    scanf("%d" , &num1);

    printf("Enter the second  number : ");
    scanf("%d" , &num2);

    printf("Enter the third number : ");
    scanf("%d" , &num3);

    if (num1>num2){
        if(num1>num3){
            greatest = num1;
        }
        else{
            greatest = num2;
        }
    }
    else if(num2>num3){
        greatest = num2;
    }
    else{
        greatest = num3;
    }

    printf("greatest number is %d ",greatest);

    return 0 ;
}
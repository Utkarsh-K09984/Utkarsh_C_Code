// QUESTION 14
// Find the Greatest Among Three Numbers


#include<stdio.h>

int main () {
    int num1,num2,num3,greatest,sec_greatest;
    printf("Enter the first number : ");
    scanf("%d",&num1);
    
    printf("Enter the second number : ");
    scanf("%d",&num2);
    
    printf("Enter the third number : ");
    scanf("%d",&num3);

    if (num1>num2){
        sec_greatest = num1;
    }
    else{
        sec_greatest = num2;
    }

    if (sec_greatest > num3){
        greatest = sec_greatest;
    }
    else{
        greatest = num3;
    }

    printf("The greatest number is : %d" , greatest);



}
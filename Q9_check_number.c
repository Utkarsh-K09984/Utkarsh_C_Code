// QUESTION 9
// Check Number Is Positive or Negative


#include<stdio.h>

int main (){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if (num*-1 < 0 ) {
        printf("Entered number is positive ");
    }
    else if (num*-1 > 0) {
        printf("Entered number is negative ");
    }
    else{
        printf("Entered number is zero");
    }

    return 0 ;
}
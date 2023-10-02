// QUESTION 18
// Leap Year Program in C with Logic, Explanation and Output


#include<stdio.h>

int main () {
    int year ;
    
    printf("Enter the year : ");
    scanf("%d",&year);

    if (year%4 ==0 ){
        printf("%d is a leap year !!!!!!",year);
    }
    else{
        printf("%d is not a leap year !!!!!!",year);
    }

    return 0;
}
// QUESTION 24
// Calculate the Sum of Natural Numbers Using the While Loop


#include<stdio.h>

int main () {
    int num , sum = 0  , i = 1 ;

    printf("Enter the number : ");
    scanf("%d",&num);

    while (i<=num) {
        sum = sum + i ;
        i++;
    }
    printf("sum of natural number : %d",sum);

    return 0 ;
   
}
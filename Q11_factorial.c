// QUESTION 11
// Calculate the Factorial of a Given Number


#include<stdio.h>

int main () {
    int num,factorial = 1 ,i=1;
    
    printf("Enter the number : ");
    scanf("%d",&num);

    while (i<=num) {
        factorial = factorial * i;
        i++ ;
    }
    printf("Factorial of the number %d is %d",num,factorial);

    return 0 ;

}
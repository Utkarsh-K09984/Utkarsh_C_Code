// QUESTION 25
// Write a C Program to Print the Multiplication Table of N


#include<stdio.h>

int main () {
    int num , i ;

    printf("Enter the number : ");
    scanf("%d",&num);

    for (i=1;i<=10;) {
        printf("%d X %d = %d\n",num,i,num*i);
        i++;
    }

    return 0 ;
}
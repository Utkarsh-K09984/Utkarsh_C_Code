// QUESTION 26
// Fibonacci Series Program in C Using DO While Loop


#include<stdio.h>

int main () {
    int num , i  , f1 = 1  , f2 = 0 , term ;
    
    printf("Enter the number of terms : ");
    scanf("%d",&num);

    printf("%d %d ",f2,f1);

    i = 2;
    do{
        term = f1 + f2;
        printf("%d ",term);

        f2 = f1;
        f1 = term;
        i++;

    } while (i < num);
    
    return 0 ;
    
}
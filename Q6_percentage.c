// QUESTION 6
// C Program to Find Percentage of 5 Subjects



#include<stdio.h>

int main () {
    float marks, sum , percentage ;
    int i ;

    for (i=1 ; i<=5 ; i++ ){
        printf("Enter marks for %d subject : ",i);
        scanf("%f",&marks);
        sum += marks;
    }

    percentage = sum/5;

    printf("the percentage of 5 subject is %f",percentage);

    return 0 ;
    
}
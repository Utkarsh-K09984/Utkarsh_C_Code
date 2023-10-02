// QUESTION 31
// C Program to Print Day of Week Name Using Switch Case


#include<stdio.h>

int main () {
    int num ;

    printf("Enter the day of week : ");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("it's sunday");
        break;
    case 2:
        printf("it's monday");
        break;
    case 3:
        printf("it's tuesday");
        break;
    case 4:
        printf("it's wednesday");
        break;
    case 5:
        printf("it's thursday");
        break;
    case 6:
        printf("it's friday");
        break;
    case 7:
        printf("it's saturday");
        break;
    
    }
}
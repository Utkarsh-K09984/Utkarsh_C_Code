// QUESTION 12
// C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)


#include<stdio.h>

int main () {
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    printf("The first power of number %d is %d \n" , num,num );
    printf("The second power of number %d is %d \n" , num,num * num);
    printf("The third power of number %d is %d" , num,num * num * num);

}
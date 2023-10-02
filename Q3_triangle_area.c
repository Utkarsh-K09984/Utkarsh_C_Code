// QUESTION 3
// C Program to Find Area of Triangle Given Base and Height


#include<stdio.h>

int main (){
    float base,height,area;
    printf("enter the base of the traingle : ");
    scanf("%f",&base);
    
    printf("enter the height of the traingle : ");
    scanf("%f",&height);
    area = 0.5 * base * height;
    printf("The area of traingle is : %f",area);
    return 0 ;
}
// QUESTION 1 
// C Program to Find Area and Circumference of Circle


#include<stdio.h>

int main(){
    float radius,area,circumference;
    
    printf("Enter the radius of the circle : ");
    scanf("%f",&radius);

    area = 3.14 * radius * radius;
    printf("The area of circle is : %f \n",area);

    circumference = 2 * 3.14 * radius;
    printf("The circumference of the circle is : %f",circumference);
    
    return 0;
    
}
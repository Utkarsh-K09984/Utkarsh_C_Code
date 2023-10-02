#include<stdio.h>

int main (){
    float b,h,a;
    printf("enter the base of the traingle : ");
    scanf("%f",&b);
    
    printf("enter the height of the traingle : ");
    scanf("%f",&h);
    a = 0.5 * b * h;
    printf("The area of traingle is : %f",a);
    return 0 ;
}
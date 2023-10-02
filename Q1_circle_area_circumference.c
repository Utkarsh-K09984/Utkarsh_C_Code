#include<stdio.h>

int main(){
    float r,a,c;
    printf("Enter the radius of the circle : ");
    scanf("%f",&r);
    a = 3.14 * r * r;
    printf("The area of circle is : %f \n",a);
    c = 2 * 3.14 * r;
    printf("The circumference of the circle is : %f",c);
}
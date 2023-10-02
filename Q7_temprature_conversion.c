// QUESTION 7
// Convert Temperature Celsius into Fahrenheit




#include<stdio.h>

int main () {
    float celcius, Fahrenheit;
    printf("Enter the temprature in celcius : ");
    scanf("%f",&celcius);
    Fahrenheit = (1.8 * celcius) + 32;
    printf("Temprature in Fahrenheit is %f",Fahrenheit);

    return 0;

}
// QUESTION 20
// Given Date Month and the Year Is Correct or Not Using If-Else


#include<stdio.h>

int main () {
    int day,month,year;
    printf("Enter the day :  ");
    scanf("%d",&day);

    printf("Enter the month :  ");
    scanf("%d",&month);

    printf("Enter the day :  ");
    scanf("%d",&year);

    if (year >= 1500 && year <= 9999){
        if (month >= 1 && month <= 12){
            if ( (day>=1 && day <= 31 ) && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )) {
                printf("Entered date is correct !!");
            }
            else if ((day>=1 && day<=30) && (month == 4 || month == 6 || month == 9 || month == 11)){
                printf("Entered date is correct !!");
            }
            else if ((day>= 1 && day <= 28 ) && month == 2 ){
                printf("Entered date is correct !!");
            }
            else if ((day == 29 && month == 2 ) && year%4 == 0 ){
                printf("Entered date is correct !!");
            }
            else{
                printf("Entered date is not correct !!");
            }

        }
    }
    return 0 ;


}
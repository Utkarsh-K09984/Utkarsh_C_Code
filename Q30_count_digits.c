// QUESTION 30
// Count the Number of Digits of an Integer Using the While Loop


#include<stdio.h>

int main (){
    int n1,num,i=0;

    printf("Enter the number :");
    scanf("%d",&num);
    n1 = num;
    if (num==0){
        printf("their are 1 digits in the number %d",n1);

    }
    else{
        for (num;num>0; ) {
            num = num/10;
            i++;
        }
        printf("their are %d digits in the number %d",i,n1);
    }
}
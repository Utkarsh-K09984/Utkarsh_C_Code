// QUESTION 29
// Palindrome Program in C Using While Loop


#include<stdio.h>

int main (){
    int n1,num,rem,new_num = 0 ;

    printf("Enter the number : ");
    scanf("%d",&num);

    n1 = num;

    for (num;num>0; ) {
        rem = num%10;
        new_num = (new_num * 10) + rem;
        num = num/10;
    }
    
    if (n1 == new_num){
        printf("Entered number is pallindrome !!");
    }
    else{
        printf("Entered number is not pallindrome !!");
    }

    return 0 ;


}
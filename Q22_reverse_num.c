// QUESTION 22
// C Program to Reverse a Number Using FOR Loop



#include<stdio.h>

int main (){
    int num,rem,new_num = 0 ;

    printf("Enter the number :");
    scanf("%d",&num);

    for (num;num>0; ) {
        rem = num%10;
        new_num = (new_num * 10) + rem;
        num = num/10;
    }
    printf("%d",new_num);


}
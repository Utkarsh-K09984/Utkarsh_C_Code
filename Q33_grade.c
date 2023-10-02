// QUESTION 33 
// Write a C Program to Find the Grade of a Student Using Switch Case.


#include<stdio.h>

int main () {
    int marks ;
    char grade;

    printf("Enter the marks of the student ");
    scanf("%d",&marks);

    switch (marks/10)
    {
    case 10:
    case 9:
        grade = 'A';
        break;
        
    case 8:
        grade = 'B';
        break;
        
    case 7:
        grade = 'C';
        break;
        
    case 6:
        grade = 'D';
        break;
    case 5:
        grade = 'E';
        break;
    default:
        grade = 'F';

    }

    printf("Grade : %c",grade);
    return 0;
    
}
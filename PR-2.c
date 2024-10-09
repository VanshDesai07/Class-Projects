#include<stdio.h>
int main ()
{
    int marks;
    printf("Please enter your marks: ");
    scanf("%d",&marks);

    if (marks>=90)
    {
    printf("Your Grade is A.");
    printf(" Excellent work! ");
    printf("You are eligible for the next level.");
    }
    else if(marks>=80)
    {
    printf("Your Grade is B. ");
    printf(" Good Job! ");
    printf("You are eligible for the next level.");
    }
    else if(marks>=70)
    {
    printf("Your Grade is C. ");
    printf(" Well Done! ");
    printf("You are eligible for the next level.");
    }
    else if(marks>=33)
    {
    printf("Your Grade is D. ");
    printf(" You passed, but you could do better. ");
    printf("You are eligible for the next level.");
    }
    else
    {
    printf("Your Grade is F. ");
    printf("Please try again next time.");
    }





return.0;

}
// PROGRAM TO CHECK WHETHER THE PERSON IS ELIGIBLE TO VOTE
#include<stdio.h>
int main()
{
    int age;
    printf("ENTER YOUR AGE\n");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("You are eligible to vote\n");
    }
    else
    {
        printf("You are not eligible to vote\n");
    }

return 0;
}
//PROGRAM TO DEVELOP  A COMMERCIAL CALCULATOR
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,res;
    char oper;
     printf("Enter the operator\n");
    scanf("%c",&oper);
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
   
    switch(oper)
    {
        case '+': res=a+b;
            break;
        case '-': res=a-b;
            break;
        case '*': res=a*b;
            break;  
        case '/': if (b==0)
        {
            printf("Divide by zero error\n");
            exit(0);
        }
                else
                {
                    res=a/b;
                    break;
        default: printf("Not a valid operator");
        exit (0);            
                }
    }
    printf("Result=%d",res);
return 0;
}
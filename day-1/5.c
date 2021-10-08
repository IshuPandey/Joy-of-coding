#include<stdio.h>
int main()
{
int a,b,greater;
printf("Enter the 2 numbers\n");
scanf("%d%d",&a,&b);
greater=a>b?a:b;
printf("The largest of two numbers is %d",greater);
return 0;
}
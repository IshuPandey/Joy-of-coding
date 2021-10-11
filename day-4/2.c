#include <stdio.h>
int main()
{
    int M_int[6],i;
    float M_float[6];
    printf("enter wages of Mr.int\n");
    for(i=0;i<6;i++) 
        scanf("%d",&M_int[i]);
    printf("enter wages of Mr.float\n");
    for(i=0;i<6;i++) 
        scanf("%f",&M_float[i]);
    printf("\nMr.int: ");
    for(i=0;i<6;i++) 
        printf("%d ",M_int[i]);
    printf("\nMr.float: ");
    for(i=0;i<6;i++) 
        printf("%f ",M_float[i]);
    printf("\nin rev order:\n");
    for(i=5;i>=0;i--)
         printf("%d ",M_int[i]);
    printf("\n");
    for(i=5;i>=0;i--)
         printf("%f ",M_float[i]);
    return 0;
}
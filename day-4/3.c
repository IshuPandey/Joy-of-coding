#include <stdio.h>
int main()
{
    int M_int[7],i,tot_int,avg_int;
    float M_float[7],tot_float,avg_float;
    printf("enter wages of Mr.int\n");
    for(i=0;i<7;i++)
        scanf("%d",&M_int[i]);
    printf("enter wages of Mr.float\n");
    for(i=0;i<7;i++)
        scanf("%f",&M_float[i]);
    
    for(i=0;i<7;i++)
    {
        tot_int+=M_int[i];
        tot_float+=M_float[i];
    }
    avg_int=tot_int/7;
    avg_float=tot_float/7;

    printf("int total=%d and avg=%d",tot_int,avg_int);
    printf("float total=%f and avg=%f",tot_float,avg_float);
    
    return 0;
}
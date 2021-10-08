#include<stdio.h>
int main()
{
int rank;
printf("Enter the rank obtained\n");
scanf("%d",&rank);
if(rank>22340)
{
    printf("Not eligible for admission\n");
}
else if (rank>12012 && rank<=22340 )
{
    printf("Eligible for MEC\n");
}
else if (rank>6505 && rank<=12012)
{
    printf("Eligible for E and C & MEC");
}
else if(rank>3250 && rank<=6505)
{
    printf("Eligible for ISE EandC & MEC");
}
else if (rank<=3250)
{
    printf("Eligible for all branches");
}
return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int books;
    printf("\n enter the number of books needed: ");
    scanf("%d",&books);
    if(books<=10000)
    {
        printf("\n no discount!!");
        printf("\n the total cost rs %.2f",books*10.0);
    }
    else if(books>10000&&books<=15000)
    {
        printf("hey!! you got 10 percent discount");
        printf("\n the total cost rs %.2f",(books*10)-0.1*(books*10));
    }
      else if(books>15000&&books<=20000)
    {
        printf("hey!! you got 20 percent discount");
        printf("\n the total cost rs %.2f",(books*10)-0.2*(books*10));
    }
    return 0;
}
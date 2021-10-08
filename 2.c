//PROGRAM TO COMPUTE ROOTS OF QUADRATIC EQUATION
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float a, b, c, disc;
    float root1,root2,real,imag;
    printf("Enter  the values of a , b and c \n");
    scanf("%f%f%f",&a,&b,&c);
    if((a == 0)&&(b == 0))
        {
            printf("Invalid coefficients \n");
            printf("try again with valid inputs \n");
        }
    else if(a == 0)
        {
            printf(" It is a Linear equation \n");
            root1 = -c / b;
            printf(" The Root=%.3f", root1);
        }
    else
        {
            disc = b*b - (4*a*c);
            if(disc == 0)
            {
                printf("The roots are real and equal\n");
                root1 = root2 = -b/(2*a);
                printf("Root1=%.3f\n Root2 = %.3f", root1, root2);
            }
            else if(disc>0)
            {
                printf("The roots are Real and Distinct\n");
                root1 = (-b + sqrt(disc)) / (2*a);
                root2 = (-b - sqrt(disc)) / (2*a);
                printf("Root1=%.3f\nRoot2 = %.3f",root1,root2);
            }
            else
            {
                printf("The roots are Real and Imaginary\n");
                real = -b / (2*a);
                imag = sqrt(fabs(disc))/(2*a);
                printf("Root1=%.3f + i %.3f \n",real, imag);
                printf("Root2 = %.3f - i %.3f",real,imag);
            }
        }
        return 0;
}


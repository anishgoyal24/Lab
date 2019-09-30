//Program to print roots of quadratic equation.
#include <stdio.h>
#include <math.h>
int main()
{
    float r1,r2,a,b,c,D;
    printf("Enter the value of a,b,c to find roots of the following Quadratic Equation: ax^(2)+bx+c=0 \n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    D=(b*b)-4*c*a;
    if(D>0)
    {
        r1=(-b+pow(D,0.5))/2;
        r2=(-b-pow(D,0.5))/2;
        printf("Roots are real and distinct \n Root 1= %f\n Root 2=%f",r1,r2);
    }
    if(D==0)
    {
        r1=(-b)/2;

        printf("Roots are real and Equal \n Root 1= %f\n Root 2=%f",r1,r1);
    }
    if(D<0)
    {
        printf("Roots are imaginary \n");
    }

    return 0;
}

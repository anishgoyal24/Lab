//Program to identify number even or not using bitwise operator.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number to check for odd or even\n");
    scanf("%d",&a);
    if((a&1)==1)
    {
        printf("Odd number");
    }
    else if((a&1)==0)
    {
        printf("Even number");
    }
    return 0;
}

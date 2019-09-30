//Program to print sum of digit of a 5-digit number.
#include <stdio.h>
int main()
{
    long int num;
    int sum=0,i;
    printf("Enter a five Digit number  ");
    scanf("%ld",&num);
    for(i=0;i<5;i++)
    {
        sum+=num%10;
        num/=10;
    }
    printf("Sum of digits of the above number is  %d",sum);
    return 0;
}

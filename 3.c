//Program to illustrate size of all data type.
#include <stdio.h>
int main()
{
    int a=0;
    signed int a1=0;
    unsigned int a2=0;
    long int b=0;
    long long int c=0;
    char d=0;
    float e=0;
    double f=0;
    long double g=0;
    printf("\n Size of char is: %d\n",sizeof(d));
    printf(" Size of int is: %d",sizeof(a));
    printf("\n Size of signed int is: %d",sizeof(a1));
    printf("\n Size of unsigned int is: %d",sizeof(a2));
    printf("\n Size of long int is: %d",sizeof(b));
    printf("\n Size of long long int is: %d",sizeof(c));
    printf("\n Size of float is: %d",sizeof(e));
    printf("\n Size of double is: %d",sizeof(f));
    printf("\n Size of long double is: %d\n\n",sizeof(g));


    return 0;
}

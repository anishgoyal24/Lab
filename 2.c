//Program to print ASCII code of an input key stroke.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character to find it's equivalent ASCII code  ");
    scanf("%c",&ch);
    int c=ch;
    printf("Equivalent ASCII code: %d",c);
    return 0;
}




#include <stdio.h>

int main()
{
    char x;
    printf("enter the alphabet:");
    scanf("%c",&x);
    if(x>='a'&&x<='z')
    {
        printf("alphabet is in lower case",x);
    }
    else if(x>='A'&&x<='Z')
    {
        printf("alphabet is in upper case",x);
    }
    else
    {
        printf("please enter a valid input",x);
    }
    }
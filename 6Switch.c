#include <stdio.h>

//SwaKSH & Capti TM
int main()
{
    printf("Calculator");

    float a,b;
    float result;
    char c;

    printf("--");
    scanf("%f%c%f",&a,&c,&b);
    switch(c)
    {
        case'+':
        result=a+b;
        break;
        case'-':
        result=a-b;
        break;
        case'*':
        result=a*b;
        break;
        case'/':
        result=a/b;
        break;
    }

    printf("  = %f",result);

    return 0;
}

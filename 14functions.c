#include <stdio.h>

int square(int x)
{
    int y = x*x;
    return y;
}

void name(char x){
    int b=45;
    printf("\n Heloo %c",x);
}

int main()
    {
        puts("Calculator");
        int x;
        scanf("%d",&x);
        printf("%d",square(x));
        name('a');name('b');
    }
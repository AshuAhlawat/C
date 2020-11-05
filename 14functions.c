#include <stdio.h>

int mathPow(int num,int pow)
    {
        int y=num^pow;
        return y;
    }

void name(char x){
    int b=45;
    printf("\n Heloo %c",x);
}

int main()
    {
        puts("Calculator");
        int x;int y;
        scanf("%d",&x);
        name('a');name('b');
        printf("%d",mathPow(5,2));
    }
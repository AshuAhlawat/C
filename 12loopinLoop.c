#include <stdio.h>

int main()
    {
        int a,b,c;
        printf("Number : ");scanf("%d",&c);

        for(a=1; a<=c; a++)
            {
                for(b=1; b<=a; b++)
                    {
                        printf("%d ",b);
                    }
                
                printf("\n");
            }
    }
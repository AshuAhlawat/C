#include <stdio.h>

int main()
    {
        int a,b,x,c=0;
        printf("Enter No. : ");scanf("%d",&x);

        for(a=1; a<=x; a++)
            {
                
                for (b = a; b <= a+c; b++)
                {
                    printf("%d",b);
                }
                printf("\n");
                c++;
            }
    }
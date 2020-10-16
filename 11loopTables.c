#include <stdio.h>

int main()
    {
        int x,a,b;
        printf("Which number's Table do you want? -- ");scanf("%d",&x);

        for(a=1; a<=10; a++)
            {
                b = x*a;
                printf("%d X %d = %d \n",x,a,b);
            }
        
    }
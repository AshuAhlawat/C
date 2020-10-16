#include <stdio.h>

int main()
    {
        int a;
        printf("Enter a no under 20 below \n");
        scanf("%d",&a);

        if (a>20)
            {
                printf("You entered no. greater than 20\n");
            }

        while (a < 20)
            {
                printf("%d\n",a+1);
                a++;
            }
    }

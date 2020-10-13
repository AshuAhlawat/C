#include <stdio.h>

int main()
    {
        int a;
        printf("Enter the no below \n");
        scanf("%d",&a);

        if (a>10)
            {
                printf("You entered no. greater than 10\n");
            }

        for (a; a < 10; a++)
            {
                printf("%d\n",a+1);
            }
    }

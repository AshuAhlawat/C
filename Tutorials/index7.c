#include <stdio.h>

int main()
    {
        float a,b,c;
        printf("Enter the radius of the circle:");
        scanf("%f",&a);
        b=3.14*a*a;
        printf("\n %f is the area of the circle",b);
        c=2*3.14*a;
        printf("\n %f is the circumference of the circle",c);

        return 0;
    }

#include <stdio.h>

int main()
    {
    	int a,b,c,d;

    	printf("\n Number 1 : ");scanf("%d",&a);
    	printf("\n Number 2 : ");scanf("%d",&b);
    	printf("\n Number 3 : ");scanf("%d",&c);

    	if(a>=b && a>=c)
        	{
        	    d = a;
        	}
        if(b>=a && b>=c)
            {
        	    d = b;
            }
        if(c>=a && c>=b)
            {
                d = c;
            }
        else { d = a; }

    	printf("\n %d is the highest number",d);

    	return 0;

    }

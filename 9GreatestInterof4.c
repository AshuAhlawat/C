#include <stdio.h>


int max_of_four(int a[])
{
    int max = a[0];
    for (int i = 0; i < 4; i++)
    {
        if (a[i]>=max)
        {
            max = a[i];
        }
    }
    return max;
}


int main()
{
    int size;
    printf("No. of inputs : ");scanf("%d",&size);
    int inputs[size];

    printf("\n");

    for(int i=0; i<sizeof(inputs)/sizeof(inputs[0]); i++)
    {
        printf(" Input %d : ",i+1);scanf("%d",&inputs[i]);
    }
    
    int result=max_of_four(inputs);
    printf("\nGreatest Integer : %d",result);
}
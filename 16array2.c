#include <stdio.h>

int main()
{
    //setting initial array
    int size;
    printf("Enter the size of array : ");scanf("%d",&size);
    int initial[size];

    //taking inputs for initial array
    for (int i=0; i<size; i++)
    {
        printf("No. %d : ",i+1);scanf("%d",&initial[i]);
    }

    //printing initial array
    printf("{ ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",initial[i]);
    }
    printf("}\n");

    //inserting input at first position
        //shifting array 1 forward
    size=size+1;
    for(int i=size; i>=0; i--)
    {
        initial[i]=initial[i - 1];
    }
        //overwriting 1st value with user input
    int x;
    printf("\nInput : ");scanf("%d",&x);
    initial[0]=x;


    //printing changed array
    printf("\n{ ");
    for(int i=0;i<size;i++)
    {
        printf("%d ",initial[i]);
    }
    printf("}\n"); 

    //identifying greastest integer
    int max = initial[0],index_of_max;
    for (int i = 0; i < size; i++)
    {
        if (max <= initial[i])
        {
            max = initial[i];
            index_of_max=i;
        }
    }

    //printing greeatest integer
    printf("\n\nArray after deleting the greatest number (%d) is:",max);
    printf("\nindex of max %d",index_of_max);

    //deleting greatest integer
    for (int i = index_of_max; i < size; i++)
    {
        initial[i] = initial[i+1];
    }

    size=size-1;
    
    //printing final Array 
    printf("\n{");
    for(int i=0; i < size; i++)
    {
        printf("%d ",initial[i]);
    }
    printf("}");
    
    return 0;
}
//DONE DONE DONE
//CREDITS : Capti/God Himself 
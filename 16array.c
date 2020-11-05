#include <stdio.h>

void sumArray(int array[],int size)
    {
        int sum;

        for(int i=0;i<size;i++)
            {
                sum = sum + array[i];
            }
        
        printf("\n %i",sum);
    }


void productArray(int array[],int size)
    {
        int multi;

        for(int i=0;i<size;i++)
            {
                 multi = multi * array[i];
            }
        
        printf("\n %i",multi);
    }

int main()
    {
        int myArray[5] = {1,2,3,4,5};
        sumArray(myArray,5);
        productArray(myArray,4);
    }
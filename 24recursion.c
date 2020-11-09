#include <stdio.h>
#include <string.h>

int x=0;;

float sum(int array[], int noofinputs)
{
    float sumofnums = array[x];
    if (x == noofinputs-1)
    {
        return sumofnums;
    }
    else
    {
        x++;
        return sumofnums + sum(array, noofinputs);
    }
}

float average(int array[],int noofinputs)
{
    return sum(array,noofinputs)/noofinputs;
}

float factorial(int array[], int noofinputs)
{
    float sumofnums = array[x];
    if (x == noofinputs-1)
    {
        return sumofnums;
    }
    else
    {
        x++;
        return sumofnums *sum(array, noofinputs);
    }
}

int main()
{
    char operation;
    printf(" What do you wanna do ? (A)verage, (S)um, (F)actorial -->");
    scanf("%c", &operation);
    
    int noofinputs;
    printf("\n No of inputs you want -- > ");scanf("%i", noofinputs);
    
    float inputs[noofinputs];
    int i = 0;
    while ( i < noofinputs)
    {    
        printf("\n  Number : %i", i + 1);scanf("%f",&inputs[i]);
        i++;
    }
    
    if(operation=='A')
    {
        float avg=average(inputs, noofinputs);
        printf("The average is = %f",avg);
    }
    else if (operation=='S')
    {
        float sumofnum=sum(inputs, noofinputs);
        printf("The average is = %f",sumofnum);
    }
    else if (operation=='F')
    {
        float factor=factorial(inputs, noofinputs);
        printf("The average is = %f",factor);
    }
    else
    {
        printf("Wrong input");
    }

}
#include <stdio.h>

int main()
    {
        float a,b;
        
        printf("Number 1 : ");scanf("%f",&a); 
        printf("Number 2 : ");scanf("%f",&b); 
        
        
         
        if (a!=b)
            {
                float c = (a>b) ?a :b ;
                printf("%f is greater.",c);
            }
            else
                {
                   printf("They are the same"); 
                }      
            
        return 0;
    }   

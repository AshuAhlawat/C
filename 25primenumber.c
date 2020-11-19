#include "stdio.h"

void checkprime(int no){
    if (no==0 || no==1){
        printf("The number is strange");
    }
    else if(no==2){
        printf("The number is prime");
    }
    else{
        for(int i=2; i<no; i++){
            if(no%i==0){
                printf("The number is composite");
                break;
            }

            if(i==(no+1)/2){
                printf("The number is prime");
                break;
            }
        }
    }

}

int main()
{
    int no;
    printf("Enter No. -- ");scanf("%i",&no);

    checkprime(no);
    }
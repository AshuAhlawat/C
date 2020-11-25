#include "stdio.h"

int main(){
    int x;
    printf("Enter number : ");scanf("%i",&x);

    int limit=x*2-1;
    int matrix[limit] [limit];
    
    int y=x;
    for(int i=0;i<limit;i++){      
        for(int j=0;j<limit+1;j++){
            if(y-j>0){
                matrix[i][j]=(y-j);
            }
            else{
                matrix[i][j]=j-y+2;
            }
        }
    }

    printf("\n\n");
    
    for(int i=0;i<limit;i++){
        for(int j=0;j<limit;j++){
            printf("%i ",matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    int matrixt[limit] [limit];

    for(int i=0;i<limit;i++){
        for(int j=0;j<limit;j++){
            matrixt[i][j]=matrix[j][i];
            printf("%i ",matrixt[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i=0;i<limit;i++){
        for(int j=0;j<limit;j++){
            int final;
            if (matrixt[i][j]>matrix[i][j]){
                final = matrixt[i][j];
            }
            else final = matrix[i][j];

            printf("%i ",final);
        }
        printf("\n");
    }
}
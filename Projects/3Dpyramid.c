#include "stdio.h"

int main(){
    int x;
    printf("Enter number : ");scanf("%i",&x);

    int limit=x*2-1;
    int matrix[limit] [limit];
    
    int y=x;
    for(int i=0;i<limit;i++){      
        for(int j=0;j<limit+1;j++){
            if(y-j>0){ matrix[i][j]=(y-j);}
            else matrix[i][j]=j-y+2;
        }
    }

    int matrixt[limit] [limit];
    for(int i=0;i<limit;i++){
        for(int j=0;j<limit;j++){
            matrixt[i][j]=matrix[j][i];

            if (matrixt[i][j]>matrix[i][j]){
                printf("%i ",matrixt[i][j]);
            }
            else printf("%i ",matrix[i][j]);
        }
        printf("\n");
    }
}
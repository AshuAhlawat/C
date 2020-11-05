#include <stdio.h>

int main()
    {
        float a11,a12,a13,a21,a22,a23,a31,a32,a33;
        printf("Enter Values with 1 space... \nCol 1 :\n");scanf("%f%f%f",&a11,&a21,&a31);
        printf("\nCol 2 : \n");scanf("%f%f%f",&a12,&a22,&a32);
        printf("\nCol 3 : \n");scanf("%f%f%f",&a13,&a23,&a33);

        printf("\n");

        int matrix [3] [3] = 
            {
                {a11,a12,a13},
                {a21,a22,a23},
                {a31,a32,a33}
            };

        int x,y;
        for(x=0;x<3;x++)
            {
                printf("| ");
                for(y=0;y<3;y++)
                    {
                        printf("%i ",matrix[x][y]);
                    }
                printf("|\n");
            }
        
        float determinant= matrix[0][0]*(matrix[1][1]*matrix[2][2]-matrix[2][1]*matrix[2][1]);
        printf("\n Determinant = %f",determinant);
    }
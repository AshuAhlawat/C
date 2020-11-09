#include <stdio.h>
/*
float minor0f2(int matrix[2][2])
    {
        float d=matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];
        return d;
    }
float minorof3(int a,int matrix1[2][2],int b,int matrix2[2][2],int c,int matrix3[2][2])
    {
        float d=(a*minor0f2(matrix1[2][2]))-(b*minorof2(matrix2[2][2]))+(c*minorof2(matrix3[2][2]));
        return d;
    }
*/
int main()
    {
        int A[10][10];
        int i,j,n,result;
        printf("Enter the order of the matrix:  ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
            {
                printf("Column %i \n", i+1);
                for(j=0;j<n;j++)
                    {
                        scanf("%d",&A[j][i]);
                    }
            }

        printf("\n");
        for(i=0;i<n;i++)
            {
                printf("| ");
                for(j=0;j<n;j++)
                {
                    printf("%d ",A[i][j]);
                }
                printf("| \n");
            }
        
        
//        float x=minorof3(a11,{{a22,a23},{a32,a33}},a21,{{a12,a33},{a32,a13}},a23,{{a12,a23},{a22,a23}});
        
    }
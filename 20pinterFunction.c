#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void pointermagic(int* pointer)
    {
        *pointer[3][3]={{1,2,3},{3,4,5},{5,6,7}};
    }

int main() {
    int matrix[3][3];
    pointermagic(&matrix[3][3]);
    printf("%i",matrix[2][1]);
}
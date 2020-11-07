#include <stdio.h>

int main()
    {
        char name='b';
        char *pointer_name=&name;

        printf("Address of Char %c is %x",name,&name);
        printf(" and the address again is %x",pointer_name);
        printf(". If i enter \'*pointer\' then its  %c and the address itself is %x ",*pointer_name,&pointer_name);
    }
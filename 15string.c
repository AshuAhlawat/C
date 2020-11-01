#include <stdio.h>

void intro(int age,int year)
    {
        char y1,y2;
        switch (year)
            {
            case 1 :
                {
                    y1='s';
                    y2='t';
                }
            break;    
            case 2 :
                {
                    y1='n';
                    y2='d';

                }
            break;                
            case 3 :
                {
                    y1='r';
                    y2='d';
                }
            break;    
            default :
                {
                    y1='t';
                    y2='h';
                }
            break;
            }
        printf(" and i am %d years old. I am a college %d%c%c year student.",age,year,y1,y2);
    }


int main()
    {
        char a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q;
        int x,y;

        printf("\n Age : ");scanf("%d",&x);
        printf("\n College Year : ");scanf("%d",&y);
        printf("\n Name(20) : ");scanf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c ",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p,&q);
        
        printf("\n Myself %C%C%C%C%C%C%C%C%C%C%C%C%C%C%C%C,",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q);intro(x,y);
    }
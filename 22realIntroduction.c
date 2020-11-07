#include <stdio.h>
#include <string.h>

int main()
    {
        char name[20],lastname[10],year[2];
        printf("First Name : ");scanf("%s",&name);
        printf("Last Name : ");scanf("%s",&lastname);

        strcat(name," ");
        strcat(name,lastname);

        int age;
        labelage:
        printf("\n Age : ");scanf("%i",&age);
        printf("\n College Year : ");scanf("%s",&year);
        
        int yearDigit=year[strlen(year)-1];
        char ender[2];
        if (yearDigit==1)
            {
                char ender[]="st";
            }
        else  if (yearDigit==2)
            {
                char ender[]="nd";
            }
        else if (yearDigit==3)
            {
                char ender[]="rd";
            }
        else if (yearDigit==4||yearDigit==5||yearDigit==6||yearDigit==7||yearDigit==8||yearDigit==9||yearDigit==0)
            {
                char ender[]="th";
            }

        printf("Myself  %s and i am %d years old. I am a college %s%s year student.",name,age,year,ender);
    }
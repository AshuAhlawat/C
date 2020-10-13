#include <stdio.h>

int main()
{
    puts("Fill the form--");

    //string name;
    int age;
    float percentage;

    //scanf("Full Name : %s",&name);
    printf("Age : ");scanf("%d",&age);
    printf("Percentage : ");scanf("%f",&percentage);

    printf("Hi! ,Myself %s, im %d and i scored %f in my Exams.","Ashwani Ahlawat",age,percentage);
    return 0;
}

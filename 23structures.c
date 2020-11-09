#include <stdio.h>
#include <string.h>

struct LpuNo
    {
        int regNo;
        char username[20];
        float percentage;
        char Grade;
    } Student1,Student2,Student4;

int main()
    {
        Student1.regNo=12016000;
        strcpy(Student1.username,"Ashwani Ahlawat");
        Student1.Grade='A';
        Student2.regNo=12016000;
        strcpy(Student2.username,"Gaurav Patel");
        
        printf("\n %s has Registeration No. %li",Student1.username,Student1.regNo);
        printf("\n %s has Registeration No. %li",Student2.username,Student2.regNo);

        struct LpuNo Student3;

        Student3.regNo=12016000;
        strcpy(Student3.username,"Swakshwar Ghosh");
        
        printf("\n %s has Registeration No. %li",Student3.username,Student3.regNo);

        Student4.regNo=12016004;
        strcpy(Student4.username,"Ankit Kumar");

        printf("\n %s has Registeration No. %li",Student4.username,Student4.regNo);
    }
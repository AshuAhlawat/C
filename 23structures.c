#include <stdio.h>
#include <string.h>

struct LpuNo
    {
        int regNo;
        char username[20];
    } Student1,Student2,Student3;

int main()
    {
        Student1.regNo=12016000;
        strcpy(Student1.username,"Ashwani Ahlawat");

        Student2.regNo=12016000;
        strcpy(Student2.username,"Gaurav Patel");

        Student3.regNo=12016000;
        strcpy(Student3.username,"Swakshwar Ghosh");
        
        printf("\n %s has Registeration No. %li",Student1.username,Student1.regNo);
        printf("\n %s has Registeration No. %li",Student2.username,Student2.regNo);
        printf("\n %s has Registeration No. %li",Student3.username,Student3.regNo);
    }
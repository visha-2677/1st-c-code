#include <stdio.h>
#include<string.h>
typedef struct studentdata // previuse name
{
    char name[56];
    int rollno;
    float mark;

}std; // aeliuse name
int main(){
    std s1,s2,s3;     //typedef aelliuse name
   // struct studentdata s1,s2,s3;
    strcpy(s1.name,"vishal");
    printf("%s\n",s1.name);
    s2.rollno=23;
    printf("%d\n",s2.rollno);
    s3.mark=88;
    printf("%f\n",s3.mark);


    // typedef <priviuse_name> <aeliuse_name>
    // typedef int v;
    // v v1,v2;
    // v1=233;
    // v2=43;
    // printf("%d",v1);
    return 0;
}
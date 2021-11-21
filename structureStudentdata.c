#include<stdio.h>
#include<string.h>
struct studentdata
{
    char name[56];
    int rollno;
    float mark;

}; //s1,s2,s3;
    struct studentdata s1,s2,s3; //Gloable variable structure
int main()
{  // struct studentdata s1,s2,s3; //Local variable structure
    strcpy(s1.name,"vishal");
    printf("%s\n",s1.name);
    s2.rollno=23;
    printf("%d\n",s2.rollno);
    s3.mark=88;
    printf("%f\n",s3.mark);
    return 0;
}
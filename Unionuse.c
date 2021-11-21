#include<stdio.h>
#include<string.h>
union studentdata
{
    char name[56];
    int rollno;
    float mark;

}; //s1,s2,s3;
   // union studentdata s1,s2,s3; //Gloable variable structure
int main()
{   union studentdata s1; //Local variable structure
    strcpy(s1.name,"vishal");
    printf("%s\n",s1.name);
    s1.rollno=23;
    printf("%d\n",s1.rollno);
    s1.mark=88;
    printf("%f\n",s1.mark);
    s1.rollno=32;
    printf("%d",s1.rollno);
    return 0;
}
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
    s1.mark=47;
    s1.rollno=87;
    strcpy(s1.name,"vishal");
    printf("%d\n ", s1.rollno);
    printf("%f\n",s1.mark);
    printf("%s\n",s1.name);
    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "vishal";
    char s2[] = "suraj";
    char s3[54];
    printf("s1 and s2 cmp %d\n"),(strcmp(s1,s2));
    // puts(strcat(s1,s2));
    printf("string s1 lengh %d\n", strlen(s1));
    printf("string s2 lengh %d\n", strlen(s2));
    printf("revrsed s1 string=");
    puts(strrev(s1));
    printf("revrsed s2 string=");
    puts(strrev(s2));

    strcpy(s3,strcat(s1,s2));
    puts(s3);
    return 0;
}
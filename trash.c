#include<stdio.h>
#include<string.h>
int main()
{
    char string[10];
    char string1[10];

    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")=='\0'];
    // printf("%d\n", strlen(string));
    // getchar();
    // fgets(string, sizeof(string1), stdin);
    puts(string);
    printf("smit");
    // puts(string1);

    return 0;
}
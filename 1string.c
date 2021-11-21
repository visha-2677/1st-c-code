#include<stdio.h>
void printname(char name[34]){
    int i=0;
    while(name[i]!='\0'){
        printf("%c",name[i]);
        i++;
        }
    printf("\n");
}
int main()
{   //char name[]={'v','i','s','h','a','l','\0'};
   char name[34];
   //char name[]="vishal";
   gets(name);
   printf("using function\n"); 
    printname(name);
   printf("\nusing printf %s\n",name);
   printf("using puts:\n");
   puts(name);
  
   return 0;
}

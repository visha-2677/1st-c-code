#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    
    // char string[98]="vishal from Ahmedabad";

    //**** Reading a file ****
    // ptr=fopen("vishalfile.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("This string is File hand to=%s",string);

    //**** writting a file ****
    // ptr=fopen("vishalfile.txt","w");
    // fprintf(ptr,"%s",string);

    //**** Append a file ****
    // ptr=fopen("vishalfile.txt","a");
    // fprintf(ptr,"%s",string);

    // **** fgetc use in file ****
    // ptr=fopen("vishalfile.txt","r");
    // char c=fgetc(ptr);
    // printf("vishal file 1st charcter %c\n",c);
    //  c=fgetc(ptr);
    // printf("vishal file 1st charcter %c\n",c);
    // printf("vishal file 1st charcter %c\n",c);

    //**** fgets use in file ****
    // char str[12];
    // ptr=fopen("vishalfile.txt","r");
    // fgets(str,7,ptr);
    // printf("The string is %s",str);

    //**** fputc and fputs use in file ****
    // ptr=fopen("vishalfile.txt","r");
//     ptr=fopen("vishalfile.txt","w");   //all file is clear but fist to start add string and charecter
//    ptr=fopen("vishalfile.txt","r+");  //all file not clear but fist to start add string and charecter
  //  ptr=fopen("vishalfile.txt","a+"); // all file not clear but last to start add string and charecter
    fputc('o',ptr);
    fputs("This string is",ptr);
    
    return 0;
}
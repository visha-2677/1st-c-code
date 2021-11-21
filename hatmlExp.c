#include<stdio.h>
#include<string.h>

void parser(char *html,int a);
 
int main()
{
    int a;
    char html[100];

    printf("Enter the html tag sentence : ");
    gets(html);

    a=strlen(html);
    // printf("Length of %d",a);
    parser(html,a);
     //printf("The sentenc after parsed : ~%s~\n",html);
 
    return 0;
}

void parser(char *html,int a)
{
    int index=0;

    for(int i=0; i<a; i++)
    {
        // for not print '>'
        if(html[i]=='>' )
        {
            i++;
            // for not print ' '(space)
            do{
                i++;
            }while(html[i]==' ');

            // for printing only charcter by charcter
            for(int j=i; j<a; j++)
            {
                printf("%c",html[j]);
                
                if(html[j+1]=='<')
                {
                    break;
                }
            }
        }
    }
}
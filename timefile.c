#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("File name=%s\n",__FILE__);
    printf("Today is Date=%s\n",__DATE__);
    printf("TOday is Time= %d  %s\n",atoi(__TIME__),__TIME__);
    printf("The Line=%d\n",__LINE__);
    printf("ANSI=%d\n",__STDC__);
    return 0;
}
#include<stdio.h>
#include<string.h>
struct DriverDeta
{
    char name[20];
    char laisens[20];
    float rouat;
    float km;
};
int main()
{   int i;
  //  struct DriverDeta d[i];ṇ
    for(int i=1;i<=3;i++)
    {   struct DriverDeta d[i];
        printf("Enter %d driver name=",i);
        strcpy(d[i].name,gets(d[i].name));

        printf("Enter %d driver laisens=",i);
        strcpy(d[i].laisens,gets(d[i].laisens));
        
        printf("Enter %d driver rouat=",i);
        scanf("%f",&d[i].rouat);

        printf("Enter %d driver km=",i);
        scanf("%f",&d[i].km);
    }
    return 0;
}

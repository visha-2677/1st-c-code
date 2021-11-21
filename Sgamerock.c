#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int computer();

int main()
{
    int i = 0, w1 = 0, w2 = 0, c;
    char p1[10], p2[10], player[10];
    int count;

    printf("\n\nWelcome to the rock, paper and secissor game\n");
    printf("Rules :--> \n");
    printf("1 : Only enter the rock, paper, and secissor\n");
    printf("2 : Enter only above words with right spelling\n");
    printf("Play and Enjoye the game\n\n");
    

    printf("Enter your name : ");
    gets(player);
    // gets fuction is very dengrous to use for the getting string from the user also use fgets
    // fgets(player, 10, stdin);
    
    while (i < 3)
    {

        printf("\n\n~~~Game no %d~~~ \n\n", i + 1);

        // Take the number from the player
        printf("Player 1 turn : ");
        // fgets(player, sizeof(p1), stdin);
        gets(p1);
        printf("%s Enterd : %s\n", player, p1);

        // Choose by the computer
        printf("Player 2 turn : \n");
        c = computer();

        if (c == 0)
            strcpy(p2, "rock");
        else if (c == 1)
            strcpy(p2, "paper");
        else if (c == 2)
            strcpy(p2, "secissor");

        printf("Computer Enterd : %s\n", p2);

        if ((p1[0] == 'r' && p2[0] == 's') || (p1[0] == 's' && p2[0] == 'p') || (p1[0] == 'p' && p2[0] == 'r'))
        {
            // strcmp(p1, "stone")==0 && strcmp(p1, "secissor")==0;
            w1++;
            printf("%s is win this game\n\n", player);
        }
        else if ((p1[0] == 's' && p2[0] == 'r') || (p1[0] == 'p' && p2[0] == 's') || (p1[0] == 'r' && p2[0] == 'p'))
        {
            w2++;
            printf("computer is win this game\n\n");
        }
        else
        {
            printf("This game is draw\n\n");
        }
        i++;
    }

    printf("\n");
    if (w1 > w2)
        printf("%s is win the game by %d point\n\n", player, w1);
    else if (w1 < w2)
        printf("computer is win the game by %d point\n\n", w2);
    else
        printf("The whole game is draw\n\n");

    return 0;
}

int computer()
{
    srand(time(NULL));

    return rand() % 3;
}
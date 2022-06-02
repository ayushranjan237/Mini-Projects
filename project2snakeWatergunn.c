#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <conio.h>
int sankewatergun(char you, char comp){
    //return 1 if you win, -1 if you lose, 0 for draw..
    // conditions for draw are ss, gg, ww...
    if (you == comp)
    {
        return 0;
    }
    // non- draw comditions are sg,gs, sw,ws, gw,wg......
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    if (you == 'g' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return -1;
    }
    
    
}
int main()
{
    char you,comp;
    srand (time(0));
    int num = rand()%100 + 1;
    if (num <33)
    {
        comp = 's';
    }
    else if (num>33 && num<66)
    {
     comp = 'w';
    }
    else
    {
        comp= 'g';
    }
    
    printf("Enter's' for snake, 'w' for water, and 'g' for gun\n ");
    scanf("%c", &you);
int result = sankewatergun(you, comp);
printf("You chose %c and computer chose %c.\n", you, comp);
if (result == 0)
{
    printf("Game is Draw! Try Again\n");
}
else if (result == 1)
{
    printf("You Won!!\n");
}
else
{
    printf("You Loose !! \n");
}
    getch();

    return 0;
}
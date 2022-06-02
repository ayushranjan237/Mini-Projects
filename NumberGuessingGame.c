#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number, guess, attempts=1;
    srand(time(0));  //time(0) function gives a unique number every time
    number=rand() %100 +1; //generates a random number b\w 1 to 100
   // printf("The number is %d\n", number);

    //keep running the loop until the number is guessed

    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess>number)
        {
          printf("Lower number please!!\n");
        }
        else if (guess<number)
        {
            printf("Higher number please!!\n");
        }
        else{
            printf("You guessed it in %d attempts\n", attempts);
        }
        attempts++;

        
    }while(attempts!=number);
    

    return 0;
}
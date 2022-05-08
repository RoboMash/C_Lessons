#include <stdio.h>
#include<stdlib.h> //to use rand function
#include<time.h> //to use time function 

int main()
{
    int number, guess, nguesses=1;
    srand(time(0)); //to get different random numbers
    number = rand()%100 + 1; // generates random number between 1 and 100
    printf("The number is %d\n", number);

    //keep running the loop until the number is guessed

    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number)
        {
            printf("Lower number please!\n");
        }
        else if(guess<number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    } 
    while(guess!=number);
    
return 0;
}

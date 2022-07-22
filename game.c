// DO NOT EXECUTE THIS FILE WITH `gcc filename` on arm64 macOS insted run this with `clang filename -o exenanme`
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int randNum;
    srand(time(0));
    randNum = rand() % 100 + 1;
    int guessed = 0;
    int guess;
    for (int chances = 7; chances; chances--){
        printf("Enter your Guess between 1 to 100\n");
        scanf("%d", &guess);
        if (guess < randNum){
            printf("Guess a bigger number\n");
        }
        else if (guess > randNum){
            printf("Guess a smaller number\n");
        }
        else{
            printf("Correct Guess\n");
            printf("You Guessed correctly in %d chances", 7-chances);
            break;
        }
    }
    return 0;
}

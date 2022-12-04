#include <stdio.h>

int main() {
    
    int guess;
    int secNumber = 13;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuess = 0;

    while (guess != secNumber && outOfGuess == 0){
        if (guessCount < guessLimit)
        {
          printf("Enter your Number: ");
          scanf("%d", &guess);
          guessCount++;
        } else {
            outOfGuess = 1;
        }
    
    }
    if (outOfGuess == 1)
    {
    printf("SORRY you reached the limit.");
        
    } else {
      printf("YOU WIN!! %d is the lucky number :D", secNumber);
           }
    return 0;
}
#include <stdlib.h>
#include <time.h>

#define FALSE 0
#define TRUE -1

int main(){
	char userName[20];
	int guess;
	int correct;
	int turns = 0;
	int keepGoing = TRUE;

	srand(time(NULL));
	correct = (rand() % 100) +1;
	turns = 0

	printf("Correct Number: %d \n", correct);

	while (keepGoing == TRUE){
		turns ++;
		printf("Turn %d: Guess what number I am thinking of: ");
		scanf("%d", &guess);
		printf("You guessed: %d. \n, guess");

		if (guess < correct){
			printf("Your guess is too low.");
		} else if (guess > correct){
			printf("Your guess is too high.");
		} else {
			printf("Congradulations! You have guessed correctly!");
			keepGoing = FALSE;
		}

		if (turns < 7){
			printf("Turns it took for you to guess correctly: %d", turns);
			printf("Amazing job! that is better than the average player.");
		} else if (turns > 7){
			printf("Turns it took for you to guess correctly: %d", turns);
			printf("That is more than the average player. Better luck next time.");
		} else {
			printf("Turns it took for you to guess correctly: %d", turns);
			printf("That is the same as the average player. You did good.");
		}
	}

	return(0);
}

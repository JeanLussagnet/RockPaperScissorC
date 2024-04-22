#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int startPlaying() {
    int choice;
    printf("Playing Rock, Paper, Scisscors...\n");
    printf("Select 1. Rock, 2. Paper, 3. Scisscors\n");

    printf("Select value: \n");
    scanf("%d", &choice);
    if (choice < 1 || choice > 3) {
      printf("invalid choice! Please select a number between 1 - 3 \n");
      return -1;
    }

    return choice;
  }

char* getChoiceString(int choice) {
  char *choices[] = {"Rock", "Paper", "Scisscors"};
  return choices[choice - 1];
} 

int generateRandomNumber() {
  return (rand() % 3) + 1;
}

int main() {
  srand(time(NULL));

  int aiChoice = generateRandomNumber();
  int userChoice = startPlaying();

 if(userChoice != -1)
  printf("You have selected %s\n", getChoiceString(userChoice));
  printf("Computer has selected %s\n", getChoiceString(aiChoice));

  if (userChoice == aiChoice) {
    printf("It's a tie!");
  } else if ((userChoice == 1 && aiChoice == 3) ||
            (userChoice == 2 && aiChoice == 1) ||
            (userChoice == 3 && aiChoice == 2)) 
            {
              printf("You Win!!\n");
            }
  else {
    printf("Computer Wins!\n");
  }

  return 0;
}
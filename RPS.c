#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int startPlaying() {
    int choice;
    printf("Playing Rock, Paper, Scisscors...");
    printf("Select 1. Rock, 2. Paper, 3. Scisscors");

    printf("Select value...");
    scanf("%d", &choice);
    if (choice == 1)
      printf("You have selected Rock!");
    else if (choice == 2)
      printf("You have selected Paper!");
    else
     printf("You have selected Scisscors!");

    return choice;
  }

char computerChoice()

int generateRandomNumber() {
  return (rand() % 3) + 1;
}

int main() {
  srand(time(NULL));

  int aiChoice = generateRandomNumber();

  int userChoice = startPlaying();

  if (aiChoice == 1)
    aiChoice == "Rock";
  else if (aiChoice == 2)
    aiChoice == "Paper";
  else
    aiChoice == "Scisscors";

  printf("Computer picked ", "%s", aiChoice);
}
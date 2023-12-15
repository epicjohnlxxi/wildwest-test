#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#include "game.h"
#include "main.h"

bool gameActive = false; // Is the game active?
bool prevEnter = false;

void GameFunc(void)
{
  gameActive = true;
  char inp1[1];
  char inp2[1];
  char inpSL[1];
  char inpGS[1];
  char inpJL[1];
  printf("You're riding your horse.\n");
  printf("As you ride, you end up in a town known as Westpoint.\n");
  printf("What will you do?\n");
  printf("1. Get off horse and check out town\n");
  printf("2. Continue riding horse\n");
  scanf("%s", inp1);

  if (strcmp(inp1, "1") == 0)
  {
    goto explore;
  }
  else if (strcmp(inp1, "2") == 0)
  {
    goto leave;
  }

  leave:
  printf("You go on your horse and ride off into the sunset.\n");
  printf("THE END\n");
  exit(0);

  explore:
  if (!prevEnter)
  {
    printf("You enter the town.\n");
  }
  else
  {
    printf("You head back outside.\n");
  }
  printf("There are three different buildings.\n");
  printf("Which one do you go to?\n");
  printf("1. Saloon\n");
  printf("2. The General Shop\n");
  printf("3. The Jail\n");
  printf("4. Leave Town\n");
  scanf("%s", inp2);
  if (strcmp(inp2, "1") == 0)
  {
    prevEnter = true;
    goto saloon;
  }
  else if (strcmp(inp2, "2") == 0)
  {
    prevEnter = true;
    goto genshop;
  }
  else if (strcmp(inp2, "3") == 0)
  {
    prevEnter = true;
    goto jail;
  }
  else if (strcmp(inp2, "4") == 0)
  {
    goto leave;
  }

  saloon:
  printf("You enter the Saloon.\n");
  printf("Bartender: What can I get you?\n");
  printf("1. Whiskey\n");
  printf("2. Wine\n");
  printf("3. Leave Saloon\n");
  scanf("%s", inpSL);
  if (strcmp(inpSL, "1") == 0)
  {
    goto whiskey;
  }
  else if (strcmp(inpSL, "2") == 0)
  {
    goto wine;
  }
  else if (strcmp(inpSL, "3") == 0)
  {
    goto explore;
  }

  // Saloon Labels
  whiskey:
  printf("You drink a cup of whiskey.\n");
  goto explore;

  wine:
  printf("You drink a glass of wine.\n");
  goto explore;
  // END OF DIVIDER
  
  genshop:
  printf("You enter the General Shop.\n");
  printf("Shop Keeper: Welcome to my shop. What can I get you?\n");
  printf("1. Clothes\n");
  printf("2. Food\n");
  printf("3. Leave General Shop\n");
  scanf("%s", inpGS);
  if (strcmp(inpGS, "1") == 0)
  {
    goto clothes;
  }
  else if (strcmp(inpGS, "2") == 0)
  {
    goto food;
  }
  else if (strcmp(inpGS, "3") == 0)
  {
    goto explore;
  }

  // GenShop Labels
  clothes:
  printf("You buy some clothes.\n");
  goto explore;

  food:
  printf("You buy some food.\n");
  goto explore;
  // END OF DIVIDER
  
  jail:
  printf("You enter the Jail.\n");
  printf("You see a man in a jail cell.\n");
  printf("Inmate: Hey kid...let me out and I'll give you somethin' special!\n");
  printf("What will you do?\n");
  printf("1. Let him out.\n");
  printf("2. Ignore and Leave Jail\n");
  scanf("%s", inpJL);
  if (strcmp(inpJL, "1") == 0)
  {
    goto lethimout;
  }
  else if (strcmp(inpJL, "2") == 0)
  {
    goto explore;
  }

  lethimout:
  printf("You let him out.\n");
  printf("Inmate: BAD CHOICE PAL!\n");
  printf("The inmate stabs you, and you lay there and bleed out to death.\n");
  printf("THE END\n");
  exit(0);
}

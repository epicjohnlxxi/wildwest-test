#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "game.h"

int main(void) {
  char inp[1];
  
  printf("WILD WEST TEST GAME\n");
  printf("Enter 'C' to continue.\n");
  scanf("%s", inp);

  if (strcmp(inp, "C") == 0 || strcmp(inp, "c") == 0)
  {
    GameFunc();
  }
}

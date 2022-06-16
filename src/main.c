#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "functions.h"

int main(int agrc, char* argv[])
{
  Player* player = malloc(sizeof *player);
  player->name = name_create();
  printf("Hello %s\n", player->name);

  free(player);

  return 0;
}


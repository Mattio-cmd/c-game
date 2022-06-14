#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./funcs.h"

typedef struct Player {
  int score;
  char *name;
} Player;

typedef struct Inventory {
  short space[8];
} Inventory;


int main(int agrc, char* argv[]) {
  Player* player = malloc(sizeof *player);
  player->name = name_create();
  printf("Hello %s", player->name);

  free(player);

  return EXIT_SUCCESS;
}


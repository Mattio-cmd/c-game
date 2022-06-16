#ifndef FUNCTIONS_H
#define FUNCTIONS_H

char* name_create();

typedef struct Player {
  int score;
  char *name;
} Player;

typedef struct Inventory {
  short space[8];
} Inventory;

#endif

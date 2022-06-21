#include <stdio.h>

char* name_create()
{
  char name_created[20];
  printf("Enter your name (20 char max): ");
  fgets(name_created, 20, stdin);
  return name_created; // TODO: Fix this issue
}

int set_score(void)
{
  int score;
  score += 1;
  return score;
}

int draw_screen()
{}

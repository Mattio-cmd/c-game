#include <stdio.h>

char* name_create()
{
  char name_created[20];
  printf("Enter your name (20 char max): ");
  fgets(name_created, 20, stdin);
  return name_created;
}

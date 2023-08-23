#include <stdio.h>

typedef struct bike_info
{
  char name[50];
  int cc;
  int price;
} bike;

int main()
{
  bike honda;
  honda.cc = 150;

  printf("cc = %d\n", honda.cc);

  return 0;
}
#include <stdio.h>
#include <string.h>
struct bike_info
{
  char name[50];
  int cc, price;
};

int main()
{
  struct bike_info honda;

  // honda
  strcpy(honda.name, "RX 100");
  honda.cc = 150;
  honda.price = 200000;

  printf("%s\n", honda.name);
  printf("%d\n", honda.cc);
  printf("%d\n", honda.price);

  return 0;
}
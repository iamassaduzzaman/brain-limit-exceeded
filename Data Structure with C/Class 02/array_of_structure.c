#include <stdio.h>

typedef struct gf_info
{
  char name[50];
  int id;
  // char section;
} gfs;

int main()
{
  gfs g[2];

  for (int i = 0; i < 2; i++)
  {
    printf("Name: ");
    scanf("%s", &g[i].name);
    printf("ID: ");
    scanf("%d", &g[i].id);
  }

    printf("\n\n");
  for (int i = 0; i < 2; i++)
  {
    printf("Name: ");
    printf("%s\n", g[i].name);
    printf("ID: ");
    printf("%d\n", g[i].id);
  }

  return 0;
}
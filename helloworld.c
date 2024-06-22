#include <stdio.h>

void gan(int *a)
{
  *a = 10;
}

int main()
{
  int a = 0;
  gan(&a);
  printf("%d\n", a);
  return 0;
}
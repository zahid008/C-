#include<stdio.h>
void f(int *i, int *j)
{
  i = j;
  *j = 2;
}

int main()
{
  int i = 5, j = 1;
  f(&i, &j);
  printf("%d %d n", i, j);
  getchar();
  return 0;
}

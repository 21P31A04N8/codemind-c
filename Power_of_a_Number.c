#include<stdio.h>
int main ()
{
  int i, x, y, t, m,k;
  scanf ("%d %d %d", &x, &y, &m);
  k=x;
  for (i = 1; i < y; i++)
    {
      k = k * x;
    }
  t = k % m;
  printf ("%d", t);
}

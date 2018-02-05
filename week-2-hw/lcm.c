#include <stdio.h>
int gcd(int u, int v);

int main (void) {
  int u, v, lcm;

  printf ("Please type in two nonnegative integers.\n");
  scanf ("%i%i", &u, &v);

  lcm = (u * v) / gcd(u, v);

  printf("%i", lcm);

  return 1;
}

int gcd (int u, int v) {
  int temp;
  while ( v != 0 ) {
    temp = u % v;
    u = v;
    v = temp;
  }
  return u;
}
#include <stdio.h>
#include <stdbool.h>

void sort (int a[], int n, bool descend) {
  int i, j, temp;
  for ( i = 0; i < n - 1; ++i )
    for ( j = i + 1; j < n; ++j ) {
      bool shouldflip;
      if ( descend ) {
        shouldflip = a[i] < a[j];
      } else {
        shouldflip = a[i] > a[j];
      }
      if ( shouldflip ) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
}

int main (void) {
  int i;
  int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11 };

  printf ("The array before the sort:\n");

  for ( i = 0; i < 16; ++i )
    printf ("%i ", array[i]);

  sort (array, 16, false);

  printf ("\n\nThe array after the ascending sort:\n");

  for ( i = 0; i < 16; ++i ) printf ("%i ", array[i]);
    printf ("\n");

  sort (array, 16, true);

  printf ("\n\nThe array after the descending sort:\n");

  for ( i = 0; i < 16; ++i ) printf ("%i ", array[i]);
    printf ("\n");

  return 0;
}
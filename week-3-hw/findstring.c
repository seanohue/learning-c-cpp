#include <stdio.h>
#include <string.h>

int find_string (char search_string[], char sub_string[]) {
  // Use pointers to keep track of places in each string
  char *p1, *p2, *p3; // p3 is kind of like a "temp" variable?

  p1 = search_string;
  p2 = sub_string;

  int i, j, found = 0;

  for (i = 0 ; i < strlen(search_string); i ++) {
    if (*p1 == *p2) {
      p3 = p1;

      for (j = 0 ; j < strlen(sub_string); j ++) {
        if (*p3 == *p2) {
          p3++;
          p2++;
        } else {
          break;
        }
      }

      p2 = sub_string;
      if (j == strlen(sub_string)) {
        found = 1;
        return i;
      }

    }

    p1++;
  }
  return -1;
}

int main (void) {
  printf("Searching for captain in string potato captain:\n");
  printf("found at index: %i", find_string("potato captain", "captain"));
  return 0;
}
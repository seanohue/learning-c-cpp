#include <stdio.h>
#include <string.h>

void remove_string (char target[], int start, int n_to_remove) {
  int writer = 0, reader = start + n_to_remove, end = reader;
  while(writer != end) {
    if (writer >= start) {
      target[writer] = target[reader];
      reader++;
    }
    writer++;
  }

  // Null terminate.
  target[end] = '\0';
}

int main (void) {
  printf("Chopping the wrong outta the wrong son:\n");
  char thing[] = "the wrong son";
  remove_string(thing, 4, 6);
  printf("here it is: %s", thing);
  return 0;
}
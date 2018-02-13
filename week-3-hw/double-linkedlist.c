#include <stdio.h>

struct dll_item {
  struct dll_item *prev;
  struct dll_item *next;
  int value;
};

struct double_linked_list {
  struct dll_item items[4];
  struct dll_item *current;
};

void print_dll(struct double_linked_list list, int how_many) {
  int i = 1;
  printf("START\n");
  while (i <= how_many) {
    printf("%i\n", list.current->value);
    list.current = list.current->next;
    i++;
  }
  printf("DONE\n");
}

int main (void) {
  struct dll_item a, b, c, d;
  a.prev = &d;
  a.next = &b;
  a.value = 1;

  b.prev = &a;
  b.next = &c;
  b.value = 2;

  c.prev = &b;
  c.next = &d;
  c.value = 3;

  d.prev = &c;
  d.next = &a;
  d.value = 4;

  struct double_linked_list list = { { a, b, c, d }, &a };

  print_dll(list, 4);

  return 0;
}
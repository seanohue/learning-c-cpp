#include <stdio.h>

struct date {
  int year;
  int month;
  int day;
};

int days_between (struct date first, struct date second);
int calc_n (struct date d);
int f (int year, int month);
int g (int month);

int main (void) {
  struct date d1;
  struct date d2;

  int year, month, day;

  printf("Please enter the YEAR for the FIRST date: ");
  scanf("%i", &year);
  printf("Please enter the MONTH for the FIRST date: ");
  scanf("%i", &month);
  printf("Please enter the DAY for the FIRST date: ");
  scanf("%i", &day);

  d1.day = day;
  d1.month = month;
  d1.year = year;

  printf("\nPlease enter the YEAR for the SECOND date: ");
  scanf("%i", &year);
  printf("Please enter the MONTH for the SECOND date: ");
  scanf("%i", &month);
  printf("Please enter the DAY for the SECOND date: ");
  scanf("%i", &day);

  d2.day = day;
  d2.month = month;
  d2.year = year;

  printf("\nThose dates are %i days apart.", days_between(d1, d2));
  return 0;
}

int days_between (struct date first, struct date second) {
  int n_first = calc_n(first);
  int n_second = calc_n(second);

  int difference = n_first - n_second;
  if (difference < 0) {
    difference *= -1;
  }
  return difference;
}

int f (int year, int month) {
  if (month <= 2) {
    return year - 1;
  }
  return year;
}

int g (int month) {
  if (month <= 2) {
    return month + 13;
  }
  return month + 1;
}

int calc_n (struct date d) {
  return 1461 * f(d.year, d.month) / 4 + 153 * g(d.month) / 5 + d.day;
}

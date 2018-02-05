#include <stdio.h>
float get_average(float numbers[10]);

int main() {
  float numbers[10] = {34.6, 301.1, 2.3, 3.455, 6.66, 27.6, 11.4, 14.4, 44.1, 15.9};
  float average;
  average = get_average(numbers);
  printf("%.4f", average);
  return 1;
}

float get_average(float numbers[10]) {
  int i;
  float sum = 0;
  float average = 0.0;
  for (i = 0; i < 10; i++) {
    sum = sum + numbers[i];
  }
  average = sum/10.f;
  return average;
}
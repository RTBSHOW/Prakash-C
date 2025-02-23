
#include <stdio.h>
int main() {
  float s, u, t, a;
  printf("Enter the initial velocity:");
  scanf("%f", &u);
  printf("Enter the time:");
  scanf("%f", &t);
  printf("Enter the acceleration:");
  scanf("%f", &a);

  s = u * t + .5 * a * t * t;
  printf("The direction is:%f\n", s);
  return 0;
}

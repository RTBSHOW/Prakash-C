#include <stdio.h>
int main() {
  int a, b, c;
  printf("Enter three diffrent number");
  scanf("%d%d%d", &a, &b, &c);
  if (a > b && a > c) {
    printf("%d is the greatest", a);
    if (b > c) {
      printf("%d is the mid", b);
      printf("%d is the smallest", c);
    } else {
      printf("%d is the smallest", b);
      printf("%d is the mid", c);
    }
  }
  if (b > a && b > c) {
    printf("%d is the greatest", b);
    if (a > c) {
      printf("%d is the mid", a);
      printf("%d is the smallest", c);
    } else {
      printf("%d is the smallest", a);
      printf("%d is the mid", c);
    }
  }
  if (c > b && c > a) {
    printf("%d is the greatest", c);
    if (b > a) {
      printf("%d is the mid", b);
      printf("%d is the smallest", a);
    } else {
      printf("%d is the smallest", b);
      printf("%d is the mid", a);
    }
  }
  return 0;
}
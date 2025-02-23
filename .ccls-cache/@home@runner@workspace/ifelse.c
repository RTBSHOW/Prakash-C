#include <stdio.h>
int main() {
  int x;
  printf("Enter a Integer:");
  scanf("%d",&x);
  if(x>0) printf("Positive Number");
  if(x<0) printf("Negative Number");
  if (x==0) printf("Zero");
  return0;
}
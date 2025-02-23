#include <stdio.h>
int main(){
  int x;
  printf("Enter a integer value:");
  scanf("%d",&x);
  float y=(float) x;
  printf("Half of the integer value is:%F",y/2);
  return 0;
}
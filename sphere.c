#include <stdio.h>
int main(){
  float a, pi, r;
  pi =3.14;
  printf("Enter the redius:");
  scanf("%f",&r);
  a= 4*pi*r*r;
  printf("The area is:%f",a);
  return 0;
}
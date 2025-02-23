#include <stdio.h>
int main() {
  float s,u,t,a;
  scanf("%f %f %f", &u, &t, &a);
  printf("Initial velocity is:%f\n",u);
  printf("The Timing is:%f\n",t);
  printf("The Acceleration is:%f\n",a);
  s=u*t+.5*a*t*t;
  printf("The direction is:%f",s);
  return 0;
  
}
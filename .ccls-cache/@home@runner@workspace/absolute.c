#include<stdio.h>
int main(){

int x;
  printf(" Enter A value");
  scanf("%d",x);
  if(x>=0) { printf("Absolute value is:%d,x");
          }
  if(x<0){
    int x=x*(-1);
    printf("Absolute value is :%d",x);  }
return 0}
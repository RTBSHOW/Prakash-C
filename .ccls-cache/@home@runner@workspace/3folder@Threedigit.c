#include<stdio.h>
intmain(){
  int x;
  printf("Enter a value");
  scanf("%d",&x);
  if(x>=100 && x<=999) {printf("The number is a three digit number");
                      }
  return 0;
}
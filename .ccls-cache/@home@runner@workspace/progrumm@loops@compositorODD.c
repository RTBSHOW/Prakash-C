#include <stdio.h>
int main(){
  int a;
  printf("Enter a value:");
  scanf("%d",&a);
  for(int i=2;i<=a;i++){
    if(a%i==0){
      printf("Number is composit: %d\n",a);
      break;
    }
    else printf("Number is prime: %d\n",a);
    break;
  }
  return 0;
}











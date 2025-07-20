#include<stdio.h>
int main(){
  int s;
  printf("Enter numbetr of rows: ");
  scanf("%d",&s);
  for(int i=s; i>=1; i--){
    for(int j=1; j<=i; j++){
      printf("%d ",j);
    }
    printf("\n");
  }
  return 0;
}
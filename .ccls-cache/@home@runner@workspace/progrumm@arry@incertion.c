#include<stdio.h>
#include<stdlib.h>
void display (int arr[],int n){
  for(int i=0; i<n; i++){
    printf("%d \n",arr[i]);
    
  }
}
int main(){
  int arr[100]= { 4, 5, 7, 32, 65};
  int n;
  printf("Enter the possition to display");
  scanf("%d",&n);
  display(arr,n);
  return 0;
}
   

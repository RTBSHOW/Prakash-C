#include <stdio.h>
#include<stdlib.h>
void display(int arr[], int number)
{
  for(int i=0; i<number; i++)
  {
    printf("%d\n",arr[i]);
  }
}

void search(int arr[], int number,int element ,int size, int capacity)
{
  for(int i=0; i<size; i++)
    {
      if(arr[i]==element){
     return ;

      if (arr[i]!=element)
        return ;
      break;
      
    }
 
}
int main(){
  
}
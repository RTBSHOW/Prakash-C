// #include <stdio.h>
// #include<stdlib.h>
// void display(int arr[], int number)
// {
//   for(int i=0; i<number; i++)
//   {
//     printf("%d\n",arr[i]);
//   }
// }

// void search(int arr[], int element, int size)
// {
//   int found = 0;
//   for(int i=0; i<size; i++)
//   {
//     if(arr[i]==element){
//       printf("We found the element at index %d\n", i);
//       found = 1;
//       break;
//     }
//   }
//   if(!found) {
//     printf("Element not found\n");
//   }
// }

// int main()
// {
//   int arr[100]={32,21,27,32,42,12};
//   int size=6, capacity=100, element;

//   printf("Enter element to search:");
//   scanf("%d",&element);

//   search(arr, element, size);

//   printf("Array contents:\n");
//   display(arr, size);

//   return 0;
// }
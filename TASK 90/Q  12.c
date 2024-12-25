#include <stdio.h>

int main() {
 int arr[]={1,2,3,4,5};
 int length = sizeof(arr)/sizeof(arr[0]);
 int newArr[length+1];
 for( int i=0;i<length;i++){
     newArr[i]=arr[i];
     newArr[length]=6;
 }
 printf("Updated array:");
 for(int i=0; i<length+1;i++){
     printf("%d ",newArr[i]);
 }

      return 0;
}


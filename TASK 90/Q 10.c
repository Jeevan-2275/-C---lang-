#include <stdio.h>

int main() {
  int arr[]={1,2,3,4,5};
  int len=sizeof(arr)/sizeof(arr[0]);
  int i=0;
  int even=0;
  int odd=0;
  for(i=0;i<5;i++){
      if(arr[i]%2==0){
          even=even+1;
      }else{
          odd=odd+1;
      }     
  }
   printf("even%d",even);
 printf("odd%d",odd);
  }
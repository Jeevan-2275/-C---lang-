#include <stdio.h>

int main() {
  int arr[]={1,2,3,4,5,6,7,8,9};
   int length=sizeof(arr)/sizeof(arr[0]);
   int count=0;
   for( int i=0;i<length-1;i++){
       if(arr[i]<arr[i+1]){
           count++;
       }
   }if(count==(length-1)){
       printf("True");
   }else{
       printf("False");
   }

    return 0;
}

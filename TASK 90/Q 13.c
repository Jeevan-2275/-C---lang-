#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5};
     int length=sizeof(arr)/sizeof(arr[0]);
     int i=0;
     int count=0;
     int number=3;
    
     for(i=0;i<length;i++){
         if(i==0){
             count++;
         }
if(arr[i] == number){ 
            printf("true");
            return 0; 
        }
     }
         printf("false");
         return 0;
 }

// #include <stdio.h>
// int main() {
//   int arr[]={1,2,3,4,5};
//   int len=sizeof(arr)/sizeof(arr[0]);
//   int i=0;
//   int even=0;
//   int odd=0;
//   for(i=0;i<5;i++){
//       if(arr[i]%2==0){
//           even=even+1;
//       }else{
//           odd=odd+1;
//       }     
//   }
//    printf("even%d",even);
//  printf("odd%d",odd);
//   }

#include<stdio.h>
int countEvenOdd(int arr){
  int even=0;
  int odd=0;
  for(int i=0;i<5;i++){
      if(arr[i]%2==0){
          even=even+1;
      }else{
          odd=odd+1;
      }  
      return  
  }
   printf("even%d",even);
 printf("odd%d",odd);
} 
int main(){
    int arr[]={1,2,3,4,5};
  int len=sizeof(arr)/sizeof(arr[0]);
  
}













// #include <stdio.h>
// double calculateAverage(int arr[],int length){
//     int sum=0;
//     int i;
//     for(i=0;i<length;i++){
//         sum=sum+arr[i];        
//     }
//     return (double)sum/length;
// }
// int main() {
// int arr[]={1,2,3,4,5};
// int length=sizeof(arr)/sizeof(arr[0]);
// double average = calculateAverage(arr,length);
//     printf("Average: %f\n",average);
//     return 0;
// }

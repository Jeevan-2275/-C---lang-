#include <stdio.h>

int main() {
  int arr[]={1,-2,3,4,5};
  int length=sizeof(arr)/sizeof(arr[0]);
int positive=0;
int negative=0;

  for(int i =0;i<length;i++){
      if(arr[i]>0){
          positive++;
      }else{
          negative++;
      }
      
  }
    printf("\n no. of positive no. :%d",positive);

  printf("\n no. of negative no. :%d",negative);

    return 0;
}  
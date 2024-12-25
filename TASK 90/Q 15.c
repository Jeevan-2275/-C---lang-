#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5};
    int newarr[]={};
        int length=sizeof(arr)/sizeof(arr[0])-1;
    

    for(int i=0;i<length;i++){
        newarr[i]=arr[i];
    }
    for(int j=0;j<(length);j++){
        printf("%d",newarr[j]);
    }
    return 0;
}



second logic
#include <stdio.h>

int main() {
  int arr[]={1,2,3,4,5};
  int length=sizeof(arr)/sizeof(arr[0]);

  for(int i =0;i<length-1;i++){
      printf("%d",arr[i]);
      
  }

    return 0;
}
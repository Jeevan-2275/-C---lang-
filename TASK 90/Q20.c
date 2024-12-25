#include <stdio.h>

int main() {
int arr[]={80,30,70,50,20};
int i;
int len=sizeof(arr)/sizeof(arr[i]);
int max=arr[0];
int min=arr[0];
for(i=1;i<len;i++){
    if(arr[i]>max){
    max=arr[i];
    }
    if(arr[i]<min){
min=arr[i];
}

}
int difference=max-min;
printf("%d\n",difference);
    return 0;
}
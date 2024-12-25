#include <stdio.h>

int main() {
    int arr[]={1,2,3,4};
        int length=sizeof(arr)/sizeof(arr[0]);
    int newarr[length+1];
    int num=0;
    printf("enter an a integer:");
    scanf("%d",&num);
    newarr[0]=num;
    for(int i=0;i<length;i++){
        newarr[i+1]=arr[i];
    }
    for(int j=0;j<(length+1);j++){
        printf("%d",newarr[j]);
    }
    return 0;
}
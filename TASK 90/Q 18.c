# include <stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int len=sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0;i<len;i++){
      if(i%2==0){
      printf("%d\n",arr[i]);
    }
    }
    printf("\n");
    return 0;
}






#include <stdio.h>

double calculateAverage(int arr[],int length){
    int sum=0;
    int i;
    for(i=0;i<length;i++){
        sum=sum+arr[i];
        
    }
    return (double)sum/length;
}
int main() {
int arr[]={1,2,3,4,5};
int length=sizeof(arr)/sizeof(arr[0]);
double average = calculateAverage(arr,length);


    printf("Average: %f\n",average);

    return 0;
}


#include <stdio.h>

  

int main() {
int arr[]={1,2,3,4,5};
int length=sizeof(arr)/sizeof(arr[0]);
  int sum=0;
    int i;
    for(i=0;i<length;i++){
        sum=sum+arr[i];
        
    }
    int avg=sum/length;

    printf("Average: %d\n",avg);

    return 0;
}
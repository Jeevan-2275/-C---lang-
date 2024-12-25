// # include  <stdio.h>
//  void checkNumber(int number){
//      if(number > 0){
//          printf("is positive:");
//      }else if(number < 0){
//          printf("is Negative:");
//      }else {
//          printf(" is zero");
//      }
//  }
// int main(){
//     int number;
//     printf("The Number is :");
//     scanf("%d" ,& number);
//     checkNumber(number);
//     return 0;
// }



#include<stdio.h>
int main(){
    int number;
    printf("Enter a Number:");
    scanf("%d",& number);
    if(number > 0){
        printf("Positve");
    }else if (number < 0){
        printf("Negative");
    }else{
        printf("Number is Zero");
    }
    return 0;
}
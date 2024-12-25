find length of string

#include <stdio.h>
#include <string.h>
int main() {
 char arr[]="jeevankadam";
 int length=0;
 int i;
 for(i=0;arr[i]!='\0';i++){
     length++;
 }
 printf("%d",length); 
    return 0;
}
with function

int STR(char *arr,int length){    
 int i;
 for(i=0;arr[i]!='\0';i++){
     length++;
 }
 printf("%d",length);
}
int main() {
    
 char arr[]="jeevankadam";
  int length=0;
STR(arr, length);
 
 
    return 0;
}




square in c lang

with function 
#include <stdio.h>
int SQUARE(int a){
    int p=(a*a);
  printf("%d",p);
}
int main(){
  int a=printf("enter your no:");
  scanf("%d",&a);
  SQUARE(a);
  return 0;
}
without function
#include <stdio.h>
int main(){
  int a=printf("enter your no:");
  scanf("%d",&a);
int p=(a*a);
  printf("%d",p);

  return 0;
}

























#include <stdio.h>
// int main() {
//     int matrix[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             printf("Element at [%d][%d]: %d\n", i, j, matrix[i][j]);
//         }
//     }
//     return 0;
// }
#include <stdio.h>
int main() {
    int arr[2][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        }
    };
    for (int i = 0; i < 2; i++) {  
        for (int j = 0; j < 3; j++) {  
            for (int k = 0; k < 3; k++) {  
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

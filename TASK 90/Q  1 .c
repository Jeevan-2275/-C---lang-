// # include <stdio.h>
// void checkGrade(int score){
//         if(score>=90&&score<=100){
//             printf("Grade: A");
//         }else if (score>=80&&score<=90){
//             printf("Grade: B");
//         }else if(score>=70&&score<=80){
//             printf("Grade: C");
//         }else if(score>=60&&score<=70){
//             printf("Grade: D");
//         }else if(score<60){
//             printf("fail");
//         }else{
//             printf("Invalid score");
//         }
//  }
//         int main(){
//         int score;
//         printf("Enter a Student  Score:");
//         scanf("%d",&score);
//               checkGrade(score);
    
//     return 0;
// }




#include <stdio.h>
int main(){
int score ;
printf("Enter a Student Score:");
scanf("%d",& score);
if(score>=90 && score<=100){
    printf("Grade:A");
}else if("score >=80 && score<=90"){
    printf("Grade:B");
}else if("score>=70 && score<=80"){
    printf("Grade:c");
}else if("score => 60  && score<=70"){
    printf("Grade:D");
}else{
    printf("fail");
} 
return 0;
}
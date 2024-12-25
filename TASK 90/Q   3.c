# include <stdio.h>
void triangle(int a,int b, int c){
    if(a==b && b==c){
        printf("equlateral");
    }else if(a==b||b==c || a==c){
        printf("isoscales");
    }else{
      printf("scalne") ;
    }        
}
int main(){
    int a,b,c;
    printf("enter the value");
    scanf("%d %d %d", & a,&b,&c);
    triangle(a,b,c);
    return 0;    
}


// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter a the Value :");
//     scanf("%d%d%d",&a,&b,&c );
//     if(a==b && b==c){
//         printf("Triangle is Equalateral\n");
//     }else if(a==b || b==c ||a==c ){
//         printf("Triangle is isoscalen\n");
//     }else{
//         printf("scalen\n");
//     }
//     return 0;
// }
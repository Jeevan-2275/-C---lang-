


#include<stdio.h>
int main(){
    char str[]=("Hello, World!");
    int len=sizeof(str)-1;
    int i=0;
    while(str[i]!=0){
        i++;
    }
    printf("%d",i);
    return 0;
}

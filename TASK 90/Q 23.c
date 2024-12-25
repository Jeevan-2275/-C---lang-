#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];
    char  str3[100];
    
    printf("enter a string1:");
    scanf("%s",str1);
    printf("enter a string2:");
    scanf("%s",str2);
int len=0;
int len2=0;
while(str1[len]!='\0'){
    len++;
};
while(str2[len2]!='\0'){
    len2++;
};
for(int i=0;i<len;i++){
    str3[i]=str1[i];
    
};for(int j=0; j<len2;j++){
    int p=len+j;
    str3[p]=str2[j];
};
printf("%s",str3);

    return 0;
}





#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello";    
    char str2[] = " world";     
    strcat(str1, str2);  

    printf("Concatenated String: %s\n", str1);

    return 0;
}














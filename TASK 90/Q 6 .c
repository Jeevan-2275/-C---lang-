#include <stdio.h>
#include <string.h>

void checkLogin(char *username, char *password) {
     char Username[] = "admin";
    char Password[] = "1234";

    if (strcmp(username, Username) == 0 && strcmp(password,Password) == 0) {
        
        printf("Login successful");
    } else {
        printf("Login failed");
    }
    
}

int main() {
    char username[100];
    
    char password[100];

    printf("Enter username: ");
    scanf("%s", username);
    
    printf("Enter password: ");
    scanf("%s", password);

    checkLogin(username, password);
return 0;
}




#include <stdio.h>
#include <string.h>
int main() {
    char username[100];
    char password[100];
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
     char Username[] = "admin";
    char Password[] = "1234";
    if (strcmp(username, Username) == 0 && strcmp(password,Password) == 0) {
        printf("Login successful");
    } else {
        printf("Login failed");
    }
return 0;
}
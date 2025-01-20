#include <stdio.h>
#include <string.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char name[100];
    char hobby[100];
    int age;

    scanf("%[^\n]",&name);
    scanf("%d",&age);
    scanf("%[^\n]",&hobby);
    printf("Name: %s\nAge: %d\n Hobby: hobby",name,age,hobby);
    
}
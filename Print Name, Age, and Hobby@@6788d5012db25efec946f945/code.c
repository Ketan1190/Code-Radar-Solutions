#include <stdio.h>
#include <string.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char name[100];
    char hobby[100];
    int age;

    scanf("%[^\n] %d %[^\n]",&name,&age,&hobby);
    
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s",hobby);
    
}
#include <stdio.h>
#include <string.h>
int main(){
    char name[100];
    int length;
    printf("enter the word\n");
    scanf("%c",name);
    length = strlen(name);
    printf("length of string %d\n",length);
    return 0;
}
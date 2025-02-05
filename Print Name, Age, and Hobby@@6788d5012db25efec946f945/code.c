#include <stdio.h>


int main() {
    int a;
    char s1[50];
    char s2[50];
    scanf("%s",s1);
    scanf("%d",&a);
    scanf("%s",s2);
    printf("Name: %s\nAge: %d\nHobby: %s",s1,a,s2);
    return 0;
}
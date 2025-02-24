// Your code here...
// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n;k++){
        if(i==1 || i==n || k==1 || k==n)
        printf("*");
        else
        printf(" ");
        }
        printf("\n");
    }
    return 0;
}
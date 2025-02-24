// Your code here...
// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i*2-1;k++){
        if(i==1 || i==n || k==1 || k==n)
        printf("*");
        }
        printf("\n");
    }
    return 0;
}
// Your code here...
// Your code here...
// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=65;k<=i+64;k++)
        printf("%d ",k);
        printf("\n");
    }
    return 0;
}
// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int k=1;k<=i;k++)
        printf("%c ",k+64);
        printf("\n");
    }
    return 0;
}
// Your code here...
#include <stdio.h>
#include <math.h>

int main(){
    int n,res;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=0;k<=n-i;k++)
        printf(" ");
        res=(int)pow(11,i)
        printf("%d",res);
        printf("\n");
    }
    return 0;
}
// Your code here...
#include <stdio.h>
#include <math.h>

int main(){
    int n,res;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int k=1;k<=n-i;k++)
        printf(" ");
        res=(int)pow(11,i);
        printf("%d",res);
        printf("\n");
    }
    return 0;
}
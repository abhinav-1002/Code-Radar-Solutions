// Your code here...

#include <stdio.h>

int main(){
    int n,res=0;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
    printf("%d X %d = %d",n,i,n*i);
    printf("\n");
    }
    return 0;
}
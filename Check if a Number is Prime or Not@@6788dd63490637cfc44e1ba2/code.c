#include <stdio.h>

int main() {
    int n,temp=0;
    scanf("%d",&n);

    for(int i=2;i<n-1;i++){
        if(n%i==0){
            temp=1;
            break;
        }
    }
    if(temp==1)
    printf("Not prime");
    else
    printf("Prime");
    return 0;
}
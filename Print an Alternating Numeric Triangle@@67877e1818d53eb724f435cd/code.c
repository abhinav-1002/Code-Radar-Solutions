// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            if(k%2==0)
            printf("0 ");
            else
            printf("1 ");
        }
        printf("\n");
    }
    return 0;
}
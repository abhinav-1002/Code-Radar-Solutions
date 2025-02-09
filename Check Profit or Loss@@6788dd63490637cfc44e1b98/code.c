#include <stdio.h>

int main() {
    
    int cp,sp,n;
    scanf("%d %d",&cp,&sp);

    if(cp>sp)
    printf("Loss");
    else if(sp>cp)
    printf("Profit");
    else
    printf("No profit No Loss");
    return 0;
}
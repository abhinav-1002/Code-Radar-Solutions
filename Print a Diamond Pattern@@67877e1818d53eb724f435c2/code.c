#include <stdio.h>

int main() {

    int n;

    scanf("%d",&n);

    for(int I=0;I<n;I++){

        for(int j=0;j<n-I-1;j++){

            printf(" ");

        }

        for(int j=0;j<(2*I)+1;j++){

            printf("*");

        }

        printf("\n");

    }

    for(int I=n-2;i>=0;i--){

        for(int j=0;j<n-I-1;j++){

            printf(" ");

        }

        for(int j=0;j<(2*I)+1;j++){

            printf("*");

        }

        printf("\n");

    }

    return 0;

}
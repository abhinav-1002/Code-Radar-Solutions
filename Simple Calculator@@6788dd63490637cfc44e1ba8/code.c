#include <stdio.h>
#include <string.h>
int main() {
    int a, b;
    char ch;
    scanf("%d %d", &a, &b);  // Read two integers
    getchar(); // This will consume the newline character left by the previous input
    scanf("%c", &ch);  // Now read the operator character

    switch(ch) {
        case '+': printf("%d", a + b); break;
        case '-': printf("%d", a - b); break;
        case '*': printf("%d", a * b); break;
        case '/': 
            if (b != 0) // Avoid division by zero
                printf("%d", a / b);
            else
                printf("Error: Division by zero");
            break;
        default:
            printf("Invalid operator");
            break;
    }
    return 0;
}

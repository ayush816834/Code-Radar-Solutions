#include <stdio.h>
int main() {
    int a, b;
    printf("");
    scanf("%d", &a);
    printf("");
    scanf("%d", &b);
    if (a||b>0) {
        printf("True\n");
    } else (-a||-b>0) {
        printf("False\n");
    }
    return 0;
}

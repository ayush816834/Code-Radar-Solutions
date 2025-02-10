#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the First Value: ");
    scanf("%d", &a);

    printf("Enter the Discount: ");
    scanf("%d", &b);
    if (a < b) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}

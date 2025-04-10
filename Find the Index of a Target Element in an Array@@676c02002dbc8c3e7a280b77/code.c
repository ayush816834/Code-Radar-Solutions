#include <stdio.h>

int main() {
    int n, found = 0;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int a;
    scanf("%d", &a);

    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            printf("Element found at index: %d\n", i);
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("-1\n"); 
    }

    return 0;
}
Loading Code...
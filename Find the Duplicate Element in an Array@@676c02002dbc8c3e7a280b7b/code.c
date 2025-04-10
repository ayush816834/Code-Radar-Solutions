#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("%d",n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                break; // Found duplicate, no need to print again for arr[i]
            }
        }
    }

    return 0;
}

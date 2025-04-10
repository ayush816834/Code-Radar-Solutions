#include <stdio.h>

int main() {
    int arr[100], freq[100];
    int n, i, j, count;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array
    }

    for(i = 0; i < n; i++) {
        count = 1;
        if(freq[i] != 0) {
            for(j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // Mark as counted
                }
            }
            freq[i] = count;
        }
    }
    for(i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("%d", arr[i]);
        }
    }

    return 0; 
}

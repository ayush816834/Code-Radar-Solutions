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
            printf("%d\n", i);
            found = 1;
           
        }
         else{
        printf("-1\n");
    }
    }

       

    return 0;
}

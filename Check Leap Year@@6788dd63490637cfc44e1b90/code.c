#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d Leap year.", year);
    } else {
        printf("%d Not a Leap year.", year);
    }

    return 0;
}
  
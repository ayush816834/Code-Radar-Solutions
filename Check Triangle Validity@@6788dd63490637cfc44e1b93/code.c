#include <stdio.h>
int main() {
    int a,b,c,sumab ,sumbc,ca;
    scanf("%d %d %d",&a,&b,&c);
    sumab=a+b;
    sumbc=b+c;
    sumca=a+c;
    if (sumab>c||sumbc>a||sumca>b)
    {
        printf("Vaild");
    } else
    {
        printf("Invalid");
    }

    return 0;
}

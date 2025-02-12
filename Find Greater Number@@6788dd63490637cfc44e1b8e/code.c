#include <stdio.h>
int main()
{
int num1,num2;
scanf("%d %d",&num2,&num1);
if(num1>num2)
{
    printf("%d", &num1);
}
else
{
    printf("%d", &num2);
}
    return 0;
}
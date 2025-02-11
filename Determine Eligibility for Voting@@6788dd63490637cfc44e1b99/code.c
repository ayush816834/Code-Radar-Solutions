#include <stdio.h>

int main()
{
int num;
printf("enter character: ");
scanf("%d",&num);
if(num<18)
{
    printf("Not Eligible");
}
else if (num>18)
{
    printf("Eligible");
}
    

    return 0;
}
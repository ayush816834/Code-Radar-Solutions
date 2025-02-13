#include <stdio.h>
void main()
{
    int sp,cp;
    scanf("%d %d",&cp,&sp);

    if (sp-cp>0)
    {
        printf("Profit");
    }
    else if (sp-cp<0)
    {
        printf("Loss");
    }
    else 
    {
        printf(1"No Loss")
    }
}
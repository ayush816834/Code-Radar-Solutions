#include <stdio.h>
void main()
{
    int cp,sp;
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
        printf("No Loss");
    }}
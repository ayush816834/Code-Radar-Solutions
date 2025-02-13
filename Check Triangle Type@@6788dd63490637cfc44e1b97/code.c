#include <stdio.h>
void main()
{
    int a,b,c;

        if  (a=b&&b=c&&c=a)
    {
        printf("Equilateral");
    }
     else if (a=b||b=c||c=a)
    {
        printf("Isoceles");
    }
      else
    {
        printf("Scalene");
    }
}

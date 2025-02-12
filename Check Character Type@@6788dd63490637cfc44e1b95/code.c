#include <stdio.h>
int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9') 
    {
        printf("Digit");
    }
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
     {
              if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel");
        } 
        else 
        {
            printf("Consonant");
        }
      }
    else
     {
        printf("Special Character");
    }

    return 0;
}

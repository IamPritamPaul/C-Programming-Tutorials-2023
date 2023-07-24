// switch case
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character :- ");
    scanf("%c", &ch); // A
    switch (ch)
    {
    /* case 'a':
        printf("Vowel");
        break;
    case 'A':
        printf("Vowel");
        break;
    case 'e':
        printf("Vowel");
        break;
    case 'E':
        printf("Vowel");
        break;
    case 'i':
        printf("Vowel");
        break;
    case 'I':
        printf("Vowel");
        break;
    case 'o':
        printf("Vowel");
        break;
    case 'O':
        printf("Vowel");
        break;
    case 'u':
        printf("Vowel");
        break;
    case 'U':
        printf("Vowel");
        break; */
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("Vowel");
        break;
    // Not a valid practice or way to use (wrong output will come)
    /* case 'a' || 'A' || 'e' || 'E' || 'i' || 'I' || 'o' || 'O' || 'u' || 'U':
        printf("Vowel");
        break; */
    default:
        printf("Not a Vowel");
    }
    return 0;
}
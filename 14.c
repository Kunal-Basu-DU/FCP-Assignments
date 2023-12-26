// Program to check whether a string is a palindrome or not
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    int length = strlen(str);
    int p = 1;

    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            p = 0;
            break;
        }
    }

    if (p != 0)
    {
        printf("String is a palindrome.\n");
    }
    else
    {
        printf("String is not a palindrome.\n");
    }
    printf("The length of the string is : %d\n", length);

    // Program to concatenate two strings
    char s1[30];
    char s2[30];

    printf("Enter 1st string : ");
    gets(s1);

    printf("Enter 2nd string : ");
    gets(s2);

    strcat(s1, s2);
    puts(s1);

    return 0;
}

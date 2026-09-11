#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("Character before: %c\n", ch - 1);
    printf("Character after: %c\n", ch + 1);

    return 0;
}
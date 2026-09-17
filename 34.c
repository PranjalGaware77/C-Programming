#include <stdio.h>
#include <string.h>

int main()
{
    char password[20];
    char confirm[20];

    printf("Set your password: ");
    scanf("%s", password);

    printf("Enter password again: ");
    scanf("%s", confirm);

    if (strcmp(password, confirm) == 0)
    {
        printf("Password set successfully!");
    }
    else
    {
        printf("Passwords do not match.");
    }

    return 0;
}
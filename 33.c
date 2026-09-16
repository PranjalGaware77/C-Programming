#include <stdio.h>

int main()
{
    int n, i;
    float num, sum = 0, hm;

    printf("Enter number of values: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Enter value %d: ", i);
        scanf("%f", &num);

        sum = sum + (1 / num);
    }

    hm = n / sum;

    printf("Harmonic Mean = %.2f", hm);

    return 0;
}
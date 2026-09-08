#include<stdio.h>
int main()
{
    int n,i;
    int count=0;
    printf("Enter a positive integer:");
    scanf("%d",&n);

    printf("Divisors=");

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        printf("%d ",i);
        count++;
    }
}
if(count==2)
printf("The number is prime");
else
printf("Not prime");

return 0;
}

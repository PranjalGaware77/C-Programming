#include<stdio.h>
int main()
{
    int n=0;
    printf("Enter an integer n=");
    scanf("%d",&n);
    int m=n*n*n*n*n;
    int o=m+n;
    float p=1.0/o;
    float q=p*p;
    printf("m=%d\t o=%d\t p=%f\t q=%.10f\n",m,o,p,q);
    return 0;
}
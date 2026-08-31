#include<stdio.h>
int main()
{
    int a=7;
    printf("a=%d\n",(a++)+(++a)+(--a)+(a--)+(a++));
    printf("%d\n",a);
    return 0;
}
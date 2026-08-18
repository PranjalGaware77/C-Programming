#include<stdio.h>
#include<math.h>
int main()
{
    int n=0;
    printf("Enter integer(>0):");
    scanf("%d",&n);
    float sqt=sqrt(n);
    float rp= 1.0/n;
    printf("\n Squareroot=%f",sqt);
    printf("\n Reciprocal=%f",rp);
    return 0;
}    
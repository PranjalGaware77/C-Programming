#include<stdio.h>
#include<math.h>
int main()
{
    int n=0;
    printf("Enter an integer n=");
    scanf("%d",&n);
    double sqt=0;
    if(n>0)
    sqt=sqrt(n);
    double rep=0;
    if(n!=0)
    rep=1.0/n;
    printf("Squareroot=%f\n",sqt);
    printf("Reciprocal=%1f\n",rep);
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    int n=0;
    printf("Enter integer(>0):");
    scanf("%d",&n);
    int sq=n*n;
    int cb=n*n*n;
    int ft=n*n*n*n;
    printf("\nSquare=%d",sq);
    printf("\nCube=%d",cb);
    printf("\nFourth power=%d",cb);
return 0;
}
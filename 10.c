#include<stdio.h>
#include<math.h>
int main()
{
    int x=0;
    printf("Enter an integer x=");
    scanf("%d",&x);
    int var1=(x*x)+5*x+6;
    float y1=sqrt(var1);
    int var2=(x*x*x*x*x)+(x*x*x*x)+x+1/2*x/2;
    float y2=sqrt((float)var2/2);
    int var3=x+(x*x)+(2*x*x*x)+(3*x*x*x*x*x);
    float y3=(float)var3/2*x;
    printf("y1=%f\ty2=%f\ty3=%f\t\n",y1,y2,y3);
    return 0;
}
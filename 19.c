#include<stdio.h>
int main()
{
    int i,num,sum;
    printf("Enter the 10 integers=");
    for(i=1;i<=10;i++)
    {
    scanf("%d",&num);
    sum=sum+num;
    }
    
    float average=sum/10;
    if(average>50)
    {
    average=average/2; 
    }
    printf("Final average=%2f",average);
    return 0;
}
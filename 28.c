#include<stdio.h>
int main()
{
    int nums[]={1,1,0,1,1,1};
    int n=6;
    int count=0;
    int max=0;
    int i=0;

    for(i=0;i<n;i++)
    {
        if(nums[i]==1)
        {
            count++;
    
        if(count>max)
        max=count;
    }
    else
    {
    count=0;
}
    }

printf("Maximum consecutives ones=%d",max);
return 0;


}
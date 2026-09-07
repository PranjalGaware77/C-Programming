#include<stdio.h>
int main()
{
    int month,year;
    printf("Enter month number and year");
    scanf("%d%d",&month,&year);

    if(month==1)
    {
        printf("January %d has 31 days\n",year);
    
    }
else if(month==2)
{
    if((year%4==0 && year%100!=0)||(year%400==0))
    {
    printf("February %d has 29 days",year);
}
else
{
 printf("February %d has 28 days\n",year);
}
}
 else if(month==3)
 {
 printf("March %d has 31 days\n",year);
 }

else if(month==4)
 {
 printf("April %d has 30 days\n",year);
 }
 else if(month==5)
 {
 printf("May %d has 31 days\n",year);
 }

else if(month==6)
 {
 printf(" June %d has 30 days\n",year);
 }
else if(month==7)
 {
 printf("July %d has 31 days\n",year);
 }
 else if(month==8)
 {
 printf("August %d has 30 days\n",year);
 }
 else if(month==9)
 {
 printf("September %d has 30 days\n",year);
 }
 else if(month==10)
 {
 printf("October %d has 31 days\n",year);
 }
else if(month==11)
 {
 printf("November %d has 30 days\n",year);
 }
 else if(month==12)
 {
 printf("December %d has 31 days\n",year);
 }
 else
 {
    printf("Invalid month\n");
 }

 return 0;
}
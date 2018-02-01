#include <stdio.h>
#include <stdlib.h>
int isLeap(int year)
{
 int t;
 if(year%4==0)
 {
   if(year%100==0)
   {
    if(year%400==0)
     t=1;
    else t=0;
   }
    else t=1;
 }
 else t=0;
 return t;
}
int main()
{
  int startDate,startMonth,startYear,endDate,endMonth,endYear;
  int index,days=0;
  int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  printf("Enter Starting Date,Month,Year....\n");
  scanf("%d",&startDate);
  scanf("%d",&startMonth);
  scanf("%d",&startYear);
  printf("Enter Ending Date,Month,Year\n");
  scanf("%d",&endDate);
  scanf("%d",&endMonth);
  scanf("%d",&endYear);
  for(index=startMonth;index<=12;index++)
  {
    if(index==2)
    {
     days+=isLeap(startYear);
    }
    days=days+month[index];
  }
  days=days-startDate+1;
  for(index=endMonth-1;index>=1;index--)
  {
   if(index==2)
    {
     days+=isLeap(endYear);
    }
    days=days+month[index];
  }
  days=days+endDate;
  for(index=startYear+1;index<endYear;index++)
  {
    days+=isLeap(index);
    days=days+365;
  }
  printf("%d\n",days);
return 0;
}
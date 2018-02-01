#include<stdio.h>
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
main()
{
  long int startDate=1,startMonth=1,startYear=1900,endDate,endMonth,endYear;
  long int index,days=0,dayIndex;
  int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  clrscr();
  printf("Enter Date,Month,Year to find the Day....\n");
  scanf("%ld",&endDate);
  scanf("%ld",&endMonth);
  scanf("%ld",&endYear);
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
  dayIndex=days%7;
  switch(dayIndex)
  {
   case 0: printf("%ld/%ld/%ld is Sunday\n",endDate,endMonth,endYear);
	   break;
   case 1: printf("%ld/%ld/%ld is Monday\n",endDate,endMonth,endYear);
	   break;
   case 2: printf("%ld/%ld/%ld is Tuesday\n",endDate,endMonth,endYear);
	   break;
   case 3: printf("%ld/%ld/%ld is Wednesday\n",endDate,endMonth,endYear);
	   break;
   case 4: printf("%ld/%ld/%ld is Thursday\n",endDate,endMonth,endYear);
	   break;
   case 5: printf("%ld/%ld/%ld is Friday\n",endDate,endMonth,endYear);
	   break;
   case 6: printf("%ld/%ld/%ld is Saturday\n",endDate,endMonth,endYear);
	   break;
  }
  getch();
  return 0;
}
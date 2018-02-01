#include<stdio.h>
#include<conio.h>
#include<bios.h>
#define VL 179
#define RT 191
#define RB 217
#define LT 218
#define LB 192
#define HL 196
#define CL 197
#define DIM 7
#define SP 32
#define BS 8
#define LST 180
#define RST 195
#define BT 193
#define TT 194
#define S_WIDTH 80
#define S_HEIGHT 25
#define WIDTH 5
#define HEIGHT 1
#define LEFT 19200
#define RIGHT 19712
#define UP 18432
#define DOWN 20480
#define ESC 283
#define HOME 18176
#define END 20224
int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *monthName[]={"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
void drawBox()
{
  int j_index,index,i_index,bcol,brow;
  clrscr();
  bcol=(S_WIDTH - ((DIM*WIDTH)+DIM+1))/2;
  brow=(S_HEIGHT - ((DIM*HEIGHT)+DIM+1))/2;
  gotoxy(bcol,brow);
  printf("%c",LT);
  for(i_index=0;i_index<DIM;i_index++)
  {
    for(index=0;index<WIDTH;index++)
     printf("%c",HL);
    printf("%c",TT);
  }
  printf("%c%c",BS,RT);
   //endOfFirstLine//
  gotoxy(bcol,++brow);
   for(i_index=0;i_index<DIM;i_index++)
   {
    for(index=0;index<DIM+1;index++)
    {
     printf("%c",VL);
     for(j_index=0;j_index<WIDTH;j_index++)
     printf("%c",SP);
    }
    gotoxy(bcol,++brow);
    printf("%c",RST);
   for(index=0;index<DIM;index++)
   {
    for(j_index=0;j_index<WIDTH;j_index++)
     printf("%c",HL);
    printf("%c",CL);
   }
   printf("%c%c",BS,LST);
   gotoxy(bcol,++brow);
  }
  brow--;
  gotoxy(bcol,brow);
  printf("%c",LB);
  for(index=0;index<DIM;index++)
  {
     for(i_index=0;i_index<WIDTH;i_index++)
     {
     printf("%c",HL);
     }
     printf("%c",BT);
  }
  printf("%c%c",BS,RB);
}
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
int dayOfdate(int endDate,int endMonth,int endYear)
{
  long int startDate=1,startMonth=1,startYear=1900;
  long int index,days=0,dayIndex;
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
  return dayIndex;
}
void fillBox(int endDate,int endMonth,int endYear)
{
 int bcol,brow,col,row,date,dayno,dateLimit;
 bcol=(80-((DIM*WIDTH)+DIM+1))/2;
 brow=(25-((DIM*HEIGHT)+DIM+1))/2;
 gotoxy(18,4);
 printf(" Month: %s ",monthName[endMonth-1]);
 gotoxy(48,4);
 printf(" Year : %d ",endYear);
 col = bcol+2;
 row=brow+1;
 gotoxy(col,row);
 printf("SUN");
 gotoxy(col+6,row);
 printf("MON");
 gotoxy(col+12,row);
 printf("TUE");
 gotoxy(col+18,row);
 printf("WED");
 gotoxy(col+24,row);
 printf("THU");
 gotoxy(col+30,row);
 printf("FRI");
 gotoxy(col+36,row);
 printf("SAT");
 col = bcol+3;
 row=brow+3;
 dayno=dayOfdate(endDate,endMonth,endYear);
 dateLimit = month[endMonth];
if(endMonth==2)
  dateLimit+=isLeap(endYear);
for( date=1;date<=dateLimit;date++)
{   gotoxy(col+dayno*(WIDTH+1),row);
   printf("%d",date);
    dayno++;
    if(dayno==7)
    {
     dayno=0;
     row+=HEIGHT+1;
    }
}
}
void main()
{
 int startDate=1,startMonth=1,startYear=2018,key;
 clrscr();
 do
 {
  drawBox();
  fillBox(startDate,startMonth,startYear);
  while(bioskey(1)==0);
  key=bioskey(0);
  switch(key)
  {
      case LEFT: startMonth--;
	      if(startMonth==0)
	      {
	       startMonth=12;
	       startYear--;
	      }
	      break;
      case RIGHT: startMonth++;
	      if(startMonth==13)
	      {
	       startMonth=1;
	       startYear++;
	      }
	      break;
      case UP:   startYear--;
		 break;
      case DOWN: startYear++;
		 break;
  }
 }while(key!=ESC);
 getch();
}
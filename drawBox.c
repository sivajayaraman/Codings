#include<stdio.h>
#include<conio.h>
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
int main()
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
  getch();
  return 0;
}
#include<stdio.h>
#include<iostream.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<dos.h>
#include<graphics.h>
#define true  1
#define false 0
void disp();
void printmenu();void intro();
void levelmenu();void easy();
void initial(int x);
void draw(int x, int y, int i);
void userwin(int no);int check(int key);
int load,i,step,level,num[25],win;
void main()
{     int gdriver = DETECT, gmode, errorcode;
      initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
      intro();
      levelmenu();
      clrscr();
      cleardevice();
      setbkcolor(RED);
      easy();
}
void levelmenu()
{  level=0;
   clrscr();
   cleardevice();
   setbkcolor(BLACK);
   settextstyle(1,0,2);
   setcolor(GREEN);
   outtextxy(240,240,"Press 1 to start");
   outtextxy(240,260,"----------------");
   outtextxy(240,280,"1. Start");
   outtextxy(240,300,"2. Rules");
   outtextxy(240,330,"Enter a choice: ");
   gotoxy(50+4,22);
   scanf("%d", &level);
   if(level==2)
      {
      outtextxy(20,40,"Read the rules :");
      outtextxy(20,80,"1: Arrange the nos in ascending order");
      outtextxy(20,120,"2: Press the no key to move the nos");
      outtextxy(20,160,"3: X-Exit");
      delay(3000);
      levelmenu();
      }
}
void intro()
{  int i,j;
   clrscr();
   cleardevice();
   setbkcolor(BLACK);
   gotoxy (25,12);
   settextstyle(4,0,6);
   for(i=0;i<=10;i++)
   {
   setcolor(i%16);
   outtextxy(2,2,"SHUFFLE GAME");
   settextstyle(1,0,7);
   outtextxy(20,200,"");
   delay(100);
   outtextxy(180,200,"1");
   delay(100);
   outtextxy(220,200,"2");
   delay(100);
   outtextxy(260,200,"3");
   delay(100);
   outtextxy(180,300,"4");
   delay(100);
   outtextxy(220,300,"5");
   delay(100);
   outtextxy(260,300,"6");
   delay(100);
   outtextxy(180,400,"7");
   delay(100);
   outtextxy(220,400,"8");
   settextstyle(4,0,8);
   delay(100);
   getch();
}
}
void printmenu()
{
   int i;
   gotoxy(33,1);printf("SHUFFLE GAME");
   gotoxy(1,2);
   for(i=0; i<80; i++)
   printf("\xcd");
   printf("\t\t\t\tX=exit game\n");
   for(i=0; i<80; i++)
   printf("\xcd");
   gotoxy (35,23);printf("Moves = %d", step);
}
void easy()
{
   int i, x, y,key;
   char press[2];
   if(load==false)
 initial(9);
   else
 load=false;
   do{
 start:
 printmenu();
 i=0;
 for(y=8; y<17; y+=4)
 for(x=33; x<44; x+=5)
 {
  draw(x,y,i);
  i++;
 }
 userwin(8);
 if(win==true)
      {  cleardevice();
  outtextxy(2,2,"You have won the game");
   delay(2000);
   disp();
   delay(2000);
   win=false;
  return;
      }
      gotoxy (55,17);printf("Tips:");
      gotoxy (61,18);printf("Number will move");
      gotoxy (61,19);printf("when you key in!");
      gotoxy (43,23);fflush(stdin);
      press[0]=toupper(getche());
      if(press[0]=='X')
      {
      disp();
      exit(1);
      }key=atoi(press);
      if((check(key))==0)
      {
 goto start;
 }
      step++;
      if(step==50)
      {
      cleardevice();
      outtextxy(20,200,"YOU HAVE SURPASSED MAXIMUM POSSIBLE MOVES");
      delay(1500);
      disp();
      delay(2500);
      exit(1);
      }
      for(i=0; i<9; i++)
      {
      if(num[i]==key)
      num[i]=0;
      else
      if(num[i]==0)
      num[i]=key;
      }
      }while(1);
      }


 
 
void initial(int x)
{      int i,no;
 step=0;
 no=0%x;
 if(no==1)
 no+=5;
 for(i=0; i<x; i++)
   {
 num[i]=no;
 no+=2;
 if(no>=x)
 if(!(no%2))
 no=1;
  else
 no=0;
   }
}
void draw(int x, int y, int i)
{      gotoxy (x,y);
   if(level==1)
   {
 printf("%c%c%c",201,205,187);
 gotoxy (x,y+1);
 printf("%c",186);
 if(num[i]==0)
 printf(" ");
 else
 printf("%d", num[i]);
 printf("%c",186);
 gotoxy (x,y+2);
 printf("%c%c%c",200,205,188);
   }
}
void disp()
{  cleardevice();
   setbkcolor(BLACK);
   settextstyle(4,0,4);
   setcolor(RED);
   outtextxy(200,100,"CREDITS:");
   settextstyle(2,0,13);
   outtextxy(300,220,"iCBSE.com");
   outtextxy(300,260,"Class: XII-A");
   outtextxy(300,300,"MDPS");
   delay(2500);
}
int check(int key)
{
   int i, valid=0;
   if(level==1)
   for(i=0; i<9; i++)
   {
 if(num[i]==key)
      {
      valid=true;
      switch(i)
      {
      case 0: if(num[1]!=0 && num[3]!=0)valid=0;break;
      case 1: if(num[0]!=0 && (num[2]!=0 && num[4]!=0))
       valid=0;break;
      case 2: if(num[1]!=0 && num[5]!=0)valid=0;break;
      case 3: if(num[0]!=0 && (num[4]!=0 && num[6]!=0))
       valid=0;break;
      case 4: if((num[1]!=0 && num[3]!=0) &&
       (num[5]!=0 && num[7]!=0))valid=0;break;
      case 5: if(num[2]!=0 && (num[4]!=0 && num[8]!=0))
       valid=false;break;
      case 6: if(num[3]!=0 && num[7]!=0)valid=0;break;
      case 7: if(num[4]!=0 && (num[6]!=0 && num[8]!=0))
       valid=0;break;
      case 8: if(num[5]!=0 && num[7]!=0)valid=0;break;
      default:valid=0;break;
       }
      }
   }
   return valid;
}
void userwin(int no)
{       int i;
 for(i=0; i<no ; i++)
 if(num[i]!=i+1)
 {
 win=false;
 break;
 }
       else
 win=true;
}


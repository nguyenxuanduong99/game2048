#include<iostream>
using namespace std;
#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y)   //di chuyển con trỏ đến cột x hàng y//
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}
void drawFrame()            //hàm vẽ khung.//
{
    for(int i=0;i<=16;i++)   //hàng.
        for(int j=0;j<=32;j++)  //cột
        {
            if(i==0&&j==0)
            {
                gotoxy(j,i);
                cout<<char(201);
            }
            else if(i==16&&j==0)
            {
                gotoxy(j,i);
                cout<<char(200);
            }
            else if(i==0&&j==32)
            {
                gotoxy(j,i);
                cout<<char(187);

            }
            else if(i==16&&j==32)
            {
                gotoxy(j,i);
                cout<<char(188);
            }
            else if((i==4||i==8||i==12)&&j==0)
            {
                gotoxy(j,i);
                cout<<char(199);
            }
            else if((i==4||i==8||i==12)&&j==32)
            {
                gotoxy(j,i);
                cout<<char(182);
            }
            else if(i==0&&(j==8||j==16||j==24))
            {
                gotoxy(j,i);
                cout<<char(209);
            }
            else if(i==16&&(j==8||j==16||j==24))
            {
                gotoxy(j,i);
                cout<<char(207);
            }
            else if((i==4||i==8||i==12)&&(j==8||j==16||j==24))
            {
                gotoxy(j,i);
                cout<<char(197);
            }
            else if(i==4||i==8||i==12)
            {
                gotoxy(j,i);
                cout<<char(196);
            }
            else if(i==0||i==16)
            {
                gotoxy(j,i);
                cout<<char(205);
            }
            else if(j==8||j==16||j==24)
            {
                gotoxy(j,i);
                cout<<char(179);
            }
            else if(j==0||j==32)
            {
                gotoxy(j,i);
                cout<<char(186);
            }
        }
}
int main()
{
    drawFrame();
}

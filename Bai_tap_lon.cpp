#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<cstdlib>
#include<ctime>
using namespace std;
int a[4][4]={0};
int score=0,check=0,test=0;
void textcolor(int x)
{
	HANDLE mau;
	mau=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau,x);
}
void introduction()
{
    	cout<<"                        CHAO MUNG BAN DEN VOI TRO CHOI                        "<<endl;
    	cout<<"                                                                              "<<endl;
    	cout<<"   2222222222222222        000000000            444444444       8888888888    "<<endl;system("color 0");Sleep(10);
	cout<<"  2:::::::::::::::22     00:::::::::00         4::::::::4     88::::::::::88   "<<endl;system("color 1");Sleep(10);
	cout<<"  2::::::222222:::::2  00:::::::::::::00      4:::::::::4   88:::::::::::::88 "<<endl;system("color 2");Sleep(10);
	cout<<"  2222222     2:::::2 0:::::::000:::::::0    4::::44::::4  8::::::88888::::::8"<<endl;system("color 3");Sleep(10);
	cout<<"              2:::::2 0::::::0   0::::::0   4::::4 4::::4  8:::::8     8:::::8"<<endl;system("color 4");Sleep(10);
	cout<<"              2:::::2 0:::::0     0:::::0  4::::4  4::::4  8:::::8     8:::::8"<<endl;system("color 5");Sleep(10);
	cout<<"           2222::::2  0:::::0     0:::::0 4::::4   4::::4   8:::::88888:::::8 "<<endl;system("color 6");Sleep(10);
	cout<<"      22222::::::22   0:::::0 000 0:::::04::::444444::::444  8:::::::::::::8  "<<endl;system("color 8");Sleep(10);
	cout<<"    22::::::::222     0:::::0 000 0:::::04::::::::::::::::4 8:::::88888:::::8 "<<endl;system("color 9");Sleep(10);
	cout<<"   2:::::22222        0:::::0     0:::::04444444444:::::4448:::::8     8:::::8"<<endl;system("color A");Sleep(10);
	cout<<"  2:::::2             0:::::0     0:::::0          4::::4  8:::::8     8:::::8"<<endl;system("color B");Sleep(10);
	cout<<"  2:::::2             0::::::0   0::::::0          4::::4  8:::::8     8:::::8"<<endl;system("color C");Sleep(10);
	cout<<"  2:::::2       2222220:::::::000:::::::0          4::::4  8::::::88888::::::8"<<endl;system("color D");Sleep(10);
	cout<<"  2::::::2222222:::::2 00:::::::::::::00         44::::::44 88:::::::::::::88 "<<endl;system("color E");Sleep(10);
	cout<<"  2::::::::::::::::::2   00:::::::::00           4::::::::4   88:::::::::88   "<<endl;system("color F");Sleep(10);
	cout<<"  22222222222222222222     000000000             4444444444     888888888     "<<endl;system("color 2");Sleep(10);
	cout<<"                                                                              "<<endl;
	cout<<"                                                                              "<<endl;
	cout<<"                            An phim bat ki de tiep tuc                        "<<endl;
	getch();
	system("cls");
	system("color 9");
	cout<<"                              Huong dan tro choi :                            "<<endl;
	cout<<"                                                                              "<<endl;
	cout<<"          Su dung mui ten "<<(char)24<<" de di chuyen                         "<<endl;
	cout<<"          Su dung mui ten "<<(char)25<<" de di chuyen                         "<<endl;
	cout<<"          Su dung mui ten "<<(char)26<<" de di chuyen                         "<<endl;
	cout<<"          Su dung mui ten "<<(char)27<<" de di chuyen                         "<<endl;
	cout<<"                                                                              "<<endl;
	cout<<"                            An phim bat ki de tiep tuc                        "<<endl;
	getch();
	system("cls");
	system("color 7");
}
void gotoxy(int x, int y)
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}
void drawFrame()
{
    for(int i=0;i<=16;i++)   //hàng.
        for(int j=0;j<=32;j++)  //cột
        {
            if(i==0&&j==0)
            {
                textcolor(1);
                gotoxy(j,i);
                cout<<char(201);
            }
            else if(i==16&&j==0)
            {
                textcolor(1);
                gotoxy(j,i);
                cout<<char(200);
            }
            else if(i==0&&j==32)
            {
                textcolor(1);
                gotoxy(j,i);
                cout<<char(187);

            }
            else if(i==16&&j==32)
            {
                textcolor(1);
                gotoxy(j,i);
                cout<<char(188);
            }
            else if((i==4||i==8||i==12)&&j==0)
            {
                textcolor(1);
                gotoxy(j,i);
                cout<<char(199);
            }
            else if((i==4||i==8||i==12)&&j==32)
            {
                textcolor(1);
                gotoxy(j,i);
                cout<<char(182);
            }
            else if(i==0&&(j==8||j==16||j==24))
            {
                textcolor(1);
                gotoxy(j,i);
                cout<<char(209);
            }
            else if(i==16&&(j==8||j==16||j==24))
            {
                textcolor(1);
                gotoxy(j,i);
                cout<<char(207);
            }
            else if((i==4||i==8||i==12)&&(j==8||j==16||j==24))
            {
                textcolor(1);
                gotoxy(j,i);
                cout<<char(197);
            }
            else if(i==4||i==8||i==12)
            {
                textcolor(1);
                gotoxy(j,i);
                cout<<char(196);
            }
            else if(i==0||i==16)
            {
                textcolor(1);
                gotoxy(j,i);
                cout<<char(205);
            }
            else if(j==8||j==16||j==24)
            {
                textcolor(1);
                gotoxy(j,i);
                cout<<char(179);
            }
            else if(j==0||j==32)
            {
                textcolor(1);
                gotoxy(j,i);
                cout<<char(186);
            }
        }
        gotoxy(35,2);
        cout<<"Diem cua ban: ";
        gotoxy(50,2);
        cout<<score;
}
void fillthematrix()
{
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
        {
            if(a[i][j]!=0)
            {
                if(a[i][j]==2||a[i][j]==4||a[i][j]==8)
                    {
                        if(a[i][j]==2)
                            textcolor(2);
                        if(a[i][j]==4)
                            textcolor(3);
                        if(a[i][j]==8)
                            textcolor(4);
                        gotoxy(4+j*8,2+i*4);
                        cout<<a[i][j];
                    }
                if(a[i][j]==16||a[i][j]==32||a[i][j]==64)
                    {
                        if(a[i][j]==16)
                            textcolor(5);
                        if(a[i][j]==32)
                            textcolor(6);
                        if(a[i][j]==64)
                            textcolor(7);
                        textcolor(2);
                        gotoxy(4+j*8,2+i*4);
                        cout<<a[i][j];
                    }
                if(a[i][j]==128||a[i][j]==256||a[i][j]==512)
                    {
                        if(a[i][j]==128)
                            textcolor(8);
                        if(a[i][j]==256)
                            textcolor(9);
                        if(a[i][j]==512)
                            textcolor(10);
                        textcolor(3);
                        gotoxy(3+j*8,2+i*4);
                        cout<<a[i][j];
                    }
                if(a[i][j]==1024||a[i][j]==2048||a[i][j]==4096)
                    {
                        if(a[i][j]==1024)
                            textcolor(11);
                        if(a[i][j]==2048)
                            textcolor(12);
                        if(a[i][j]==4096)
                            textcolor(13);
                        textcolor(4);
                        gotoxy(3+j*8,2+i*4);
                        cout<<a[i][j];
                    }
            }
        }

}
void Startgame()
{
    srand(time(NULL));
    int pot[4];
    pot[0]=rand()%4;
    pot[1]=rand()%4;
    do
    {
        pot[2]=rand()%4;
        pot[3]=rand()%4;
    }
    while(pot[0]==pot[2]&&pot[1]==pot[3]);
    a[pot[0]][pot[1]]=(rand()%2+1)*2;
    a[pot[2]][pot[3]]=(rand()%2+1)*2;
}
void turnleft()
{
    for(int q=0;q<3;q++)
    {
        for(int i=0;i<4;i++)
            for(int j=0;j<3;j++)
                if(a[i][j]==0)
                {
                    test++;
                    a[i][j]=a[i][j+1];
                    a[i][j+1]=0;
                }
    }
    for(int w=0;w<4;w++)
        for(int e=0;e<3;e++)
            if(a[w][e]==a[w][e+1])
            {
                test++;
                a[w][e]=a[w][e]+a[w][e+1];
                a[w][e+1]=0;
                if(a[w][e]==2048)
                    check=1;
                score=score+a[w][e];
            }
    for(int r=0;r<4;r++)
        for(int t=0;t<3;t++)
        if(a[r][t]==0)
        {
            a[r][t]=a[r][t+1];
            a[r][t+1]=0;
        }
    if(a[0][3]*a[1][3]*a[2][3]*a[3][3]==0&&test!=0)
    {
        int temp;
        srand(time(NULL));
        do
        {
            temp=rand()%4;
        }
        while(a[temp][3]!=0);
        a[temp][3]=2;
        system("cls");
        drawFrame();
        fillthematrix();
    }
    test=0;
}
void turnright()
{
    for(int q=0;q<3;q++)
    {
        for(int i=0;i<4;i++)
            for(int j=3;j>0;j--)
                if(a[i][j]==0)
                {
                    test++;
                    a[i][j]=a[i][j-1];
                    a[i][j-1]=0;
                }
    }
    for(int w=0;w<4;w++)
        for(int e=3;e>0;e--)
            if(a[w][e]==a[w][e-1])
            {
                test++;
                a[w][e]=a[w][e]+a[w][e-1];
                a[w][e-1]=0;
                if(a[w][e]==2048)
                    check=1;
                score=score+a[w][e];
            }
    for(int r=0;r<4;r++)
        for(int t=3;t>0;t--)
        if(a[r][t]==0)
        {
            a[r][t]=a[r][t-1];
            a[r][t-1]=0;
        }
    if(a[0][0]*a[1][0]*a[2][0]*a[3][0]==0&&test!=0)
    {
        int temp;
        srand(time(NULL));
        do
        {
            temp=rand()%4;
        }
        while(a[temp][0]!=0);
        a[temp][0]=2;
        system("cls");
        drawFrame();
        fillthematrix();
    }
    test=0;
}
void turnup()
{
    for(int q=0;q<3;q++)
    {
        for(int i=0;i<3;i++)
            for(int j=0;j<4;j++)
                if(a[i][j]==0)
                {
                    test++;
                    a[i][j]=a[i+1][j];
                    a[i+1][j]=0;
                }
    }
    for(int w=0;w<3;w++)
        for(int e=0;e<4;e++)
            if(a[w][e]==a[w+1][e])
            {
                test++;
                a[w][e]=a[w][e]+a[w+1][e];
                a[w+1][e]=0;
                if(a[w][e]==2048)
                    check=1;
                score=score+a[w][e];
            }
    for(int r=0;r<3;r++)
        for(int t=0;t<4;t++)
        if(a[r][t]==0)
        {
            a[r][t]=a[r+1][t];
            a[r+1][t]=0;
        }
    if(a[3][0]*a[3][1]*a[3][2]*a[3][3]==0&&test!=0)
    {
        int temp;
        srand(time(NULL));
        do
        {
            temp=rand()%4;
        }
        while(a[3][temp]!=0);
        a[3][temp]=2;
        system("cls");
        drawFrame();
        fillthematrix();
    }
    test=0;
}
void turndown()
{
    for(int q=0;q<3;q++)
    {
        for(int i=3;i>0;i--)
            for(int j=0;j<4;j++)
                if(a[i][j]==0)
                {
                    test++;
                    a[i][j]=a[i-1][j];
                    a[i-1][j]=0;
                }
    }
    for(int w=3;w>0;w--)
        for(int e=0;e<4;e++)
            if(a[w][e]==a[w-1][e])
            {
                test++;
                a[w][e]=a[w][e]+a[w-1][e];
                a[w-1][e]=0;
                if(a[w][e]==2048)
                    check=1;
                score=score+a[w][e];
            }
    for(int r=3;r>0;r--)
        for(int t=0;t<4;t++)
        if(a[r][t]==0)
        {
            a[r][t]=a[r-1][t];
            a[r-1][t]=0;
        }
    if(a[0][0]*a[0][1]*a[0][2]*a[0][3]==0&&test!=0)
    {
        int temp;
        srand(time(NULL));
        do
        {
            temp=rand()%4;
        }
        while(a[0][temp]!=0);
        a[0][temp]=2;
        system("cls");
        drawFrame();
        fillthematrix();
    }
    test=0;
}
void checkmatrix()
{

}
void endgame()
{
    if(check==1)
        cout<<"you are victory";
}
int getkey()
{
    char c=_getch();
    if(c=='w')
        turnup();
    if(c=='s')
        turndown();
    if(c=='d')
        turnright();
    if(c=='a')
        turnleft();

}
int main()
{
    int x;
    introduction();
    Startgame();
    drawFrame();
    fillthematrix();
    do{
        getkey();
        system("cls");
        drawFrame();
        fillthematrix();
    }while(check==0);
}

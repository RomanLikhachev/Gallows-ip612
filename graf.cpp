#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <fstream>
#include "hangman.h"
#include <graphics.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{  
 int k=0,i,j,t,tx,ty,l,g,h,z,c,d,w=0,o=0,b=0,tim=0;
 int x=0,y=0,n,m,v;
     string s;
     int q;
     char *str = new char [1024];
     char p;
     initwindow (800,800);
     setlocale(0,"RUS");
     settextstyle(0,0,10);
     setcolor(10);
     outtextxy (300,200,"Hangman");
     settextstyle(9,0,3);
     setcolor(RED);
     outtextxy (295,300,"Enter"); 
      k=getch();
        
        if (k==13)
                {
                do {    
                   cleardevice();
                   settextstyle(0,0,4);
                   setcolor(9);
                   outtextxy (50,100,"The choice of category");
                   
                   setcolor(14);
                   setlinestyle(0,0,2);
                  
                   for (i=0,j=160; i<4;i++)
                       {
                     
                       x=200; y=j;
                       moveto (x,y);
                       x=600; y=j;
                       lineto (x,y);
                       j+=80;
                       }
                   
                   for (i=0, j=200; i<2; i++)
                       {
                       x=j; y=160;
                       moveto (x,y);
                       x=j; y=400;
                       lineto(x,y);
                       j+=400;
                       } 
                   settextstyle(8,0,5);
                   setcolor(3);
                   outtextxy (320,180,"Kino");
                   setcolor(15);
                   outtextxy (320,270,"Sport");
                   setcolor(15);
                   outtextxy (320,350,"Musika");
                   i=200; j=100;
                   

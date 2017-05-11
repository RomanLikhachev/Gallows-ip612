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

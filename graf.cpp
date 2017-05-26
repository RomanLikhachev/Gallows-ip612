#include "hangman.h"
#include <graphics.h>

using namespace std;

int main()
{  
 int k=0,i,j,v;
 int x=0,y=0;
     string s;
     int q;
     char *str = new char [1024];
     char p;
     int r=1;
     int z=0;
     next:
     while(r==1)
     {
     initwindow (800,800);
     setlocale(0,"RUS");
     settextstyle(0,0,10);
     setcolor(10);
     outtextxy (300,200,"Hangman");
     settextstyle(9,0,3);
     setcolor(RED);
     outtextxy (295,300,"Enter"); 
     getch();
     if(z==0)
{
     cleardevice();
     settextstyle(0,0,10);
     setcolor(10);
     outtextxy (230,150,"Instruction");
     settextstyle(9,0,3);
     setcolor(WHITE);
     outtextxy (10,250,"Vasha zadacha otgadat slovo kotoroe ya Vam zagadal.");
     outtextxy (10,300,"Podskazka eto vibranaya Vami kategoria. Udachi.");
     outtextxy (10,350,"Upravlenie:");  
     outtextxy (200,350,"Vvodit alphavit Englisha.");
     outtextxy (10,400,"Predupregdenie: Slovo eto pomes English i Russia.");
     setcolor(RED);     
     outtextxy (295,500,"Enter"); 
     z++;
}      
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
                    do
                       {
                       setlinestyle(0,0,8);
                       setcolor(12);                   
                       rectangle(i-1,j+60,i+400,j+140);
                       k=getch();
                       setlinestyle(0,0,8);
                       setcolor(14);                     
                       rectangle(i-1,j+60,i+400,j+140);
                              
                       if ((k==72) && (j>100)) j-=80;
                       if ((k==80) && (j<250)) j+=80; 
                
                       if (j==100) 
                                   {
                                   setcolor(3); 
                                   outtextxy (320,180,"Kino");
                                   setcolor(15);
                                   outtextxy (320,270,"Sport");
                                   setcolor(15);
                                   outtextxy (320,350,"Musika");
                                   
                                  
                                   }
                       if (j==180) {                            
                                  
								    setcolor(15);  
                                   outtextxy (320,180,"Kino");
                                   setcolor(2);
                                   outtextxy (320,270,"Sport");
                                   setcolor(15);
                                   outtextxy (320,350,"Musika");
                                                                             
                                   }
                       if (j==260) {
                                
                                  
                                   setcolor(15);    
                                   outtextxy (320,180,"Kino");
                                   setcolor(15);
                                   outtextxy (320,270,"Sport");
                                   setcolor(4);
                                   outtextxy (320,350,"Musika");
                              }
                              
                              } while (k!=13) ;

                   cleardevice();
               closegraph();
               
                   switch (j)
                            {
                            case 100:
                             	v=1;
							 	category(v, str, s);
                              	game(str); 
                              	system("PAUSE");
                              	system("CLS");
                              	goto next;
							  	break;   
                            case 180:
                            	v=2;
                            	 category( v, str, s);
                                game(str);
                                system("PAUSE");
                               system("CLS");
                             	goto next; 
								break;     
                            case 260:
                            	v=3;
                                category( v, str,  s);
                                game(str);
                               system("PAUSE");
                                system("CLS");
		                     	goto next;
                                break;
                                  
                            
                             } 
                             } while (j!=260); 
                         
                         }
                     }
                     getch();
               }

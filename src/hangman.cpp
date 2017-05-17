#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <fstream>
#include "hangman.h"
using namespace std;

int main()
{  
    string s;
    int q;
    char *str = new char [1024];
    char p;
    next:
    cout<<"Viberi kategori: "<<endl;
    cout<<"1) Kino"<<endl;
    cout<<"2) Sport"<<endl;
    cout<<"3) Musika"<<endl;
    cin>>p;
    
    string bukv="4567890àáâãäå¸æçèéêëìíîïğñòóôõö÷øùüûúışÿÀÁÂÃÄÅ¨ÆÇÈÉÊËÌÍÎÏĞÑÒÓÔÕÖ×ØÙÜÛÚİŞßqwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    
    
    if(bukv.find(p) != string::npos)
     {
        for(int z=0; z<20; z++)
        {
           cout<<"\n"; 
            }
     cout<<"Error! Smotri na menu.\n";
     goto next;
            }  
     string buka="-4-5-6-7-8-9";
     if(buka.find(p) != string::npos)
     {
        for(int z=0; z<20; z++)
        {
           cout<<"\n"; 
            }
     cout<<"Error! Smotri na menu.\n";
     goto next;
            }      
   
      string buk1="1";
      string buk2="2";
      string buk3="3";
   
      if(buk1.find(p) != string::npos)
      {
            q=1;      
              }
      if(buk2.find(p) != string::npos)
      {
            q=2;      
              }
      if(buk3.find(p) != string::npos)
      {
            q=3;      
              }
         
    category(q, str, s);
    game(str);    
    return 0;
    }
      

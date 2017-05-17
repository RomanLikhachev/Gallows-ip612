#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <fstream>
#include "hangman.h"
using namespace std;

void category(int q, char *str, string s)
{
    ifstream fin;
    ofstream fout;
    int t=0;
    int g;
    int i=0;
      
    if(q==1)
    {
    ifstream base("Cinema.txt");
    while (!base.eof())
    {
        base.getline(str, 1024, '\n');
        i++;
    }
    base.close();
    delete str;
    
    fin.open("Cinema.txt");
     if (fin.fail())
     {
       cout<<"Error\n";
       exit(1);
       }
 
     fout.open("slovo.txt");
     if (fout.fail())
     {
       cout<<"Error\n";
       exit(1);
       }
       srand(time(NULL));
        g=rand()%i;
     while(!fin.eof()) 
     {
        getline(fin, s) ;
        t++;
        if (t==g) fout<<s;
     }
    
     fin.close();
     fout.close();
     }
     
    if(q==2)
    {
    ifstream base("Sport.txt");
    while (!base.eof())
    {
        base.getline(str, 1024, '\n');
        i++;
    }
    base.close();
    delete str;
    fin.open("Sport.txt");
     if (fin.fail())
     {
       cout<<"Error\n";
       exit(1);
       }
 
     fout.open("slovo.txt");
     if (fout.fail())
     {
       cout<<"Error\n";
       exit(1);
       }
       srand(time(NULL));
       g=rand()%i;
     while(!fin.eof()) 
     {
        getline(fin, s);
        t++;
        if (t==g) fout<<s;
     }
     fin.close();
     fout.close();
     }
     
     if(q==3)
     {
    ifstream base("Music.txt");
    while (!base.eof())
    {
        base.getline(str, 1024, '\n');
        i++;
    }
    base.close();
    delete str;
    fin.open("Music.txt");
     if (fin.fail())
     {
       cout<<"Error\n";
       exit(1);
       }
     fout.open("slovo.txt");
     if (fout.fail())
     {
       cout<<"Error\n";
       exit(1);
       }
       srand(time(NULL));
       g=rand()%i;
     while(!fin.eof())
     {
        getline(fin , s );
        t++;
        if (t==g) fout<<s;
     }
     fin.close();
     fout.close(); 
     }
     }


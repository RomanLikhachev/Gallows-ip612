#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <fstream>
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

void game(char *str)
{
    FILE *f; 
    int MAXLEN=15;
    char w[MAXLEN]; 
 
    if ( (f = fopen("slovo.txt", "r")) == NULL ) exit(0); 
    while ( !feof(f) ) 
    { 
        fgets(w, MAXLEN, f); 
    } 
    fclose(f); 

    const int MAX_WRONG = 8; //максимально допустимое количество ошибок
    vector<string>words; //подборка слов дл€ загадывывани€
    words.push_back(w);
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(), words.end());
    const string THE_WORD = words[0]; // слово дл€ отдгадывани€
    int wrong = 0; //количество ошибочных вариантов
    string soFar(THE_WORD.size(), '-'); //часть слова, открыта€ на данный момент
    string used = ""; //уже отгаданные буквы
    
    for(int z=0; z<15; z++)
    {
           cout<<"\n"; 
            }
    cout<<"Welcome game HANGMAN. Good Luck!\n";
    
    //основа
    
    while((wrong<MAX_WRONG) && (soFar != THE_WORD))
    {
      cout << "\n\nY Vas est vsego "<<(MAX_WRONG - wrong);
      cout << " popitok.\n";
      cout << "\nVi ispolsovali eti bukvi:\n" <<used <<endl;
      cout << "\nTyt slovo kotoroe ya zagadal:\n" << soFar<< endl;
      
      char guess;
      next:
      cout << "\n\nVasha bukva: ";
      cin>>guess;
      string buk="1234567890абвгдеЄжзийклмнопрстуфхцчшщьыъэю€јЅ¬√ƒ≈®∆«»… ЋћЌќѕ–—“”‘’÷„Ўў№џЏЁёя-.,?/[]";
       if(buk.find(guess) != string::npos)
       {
        for(int z=0; z<25; z++)
        {
           cout<<"\n"; 
            }
           cout<<"Error!\n";
           goto next;
           }
      guess = toupper(guess); //перевод в верхний регистр
      // так как загаданное слово записанно в верхнем регистре
      while (used. find(guess) != string::npos)
      {
            cout<<"\nTi yje zagadival "<<guess<<endl;
            cout<<"Vvedi bukvu eshe raz: ";
            cin>>guess;
            guess=toupper(guess);
            }
      used+=guess;
      if(THE_WORD.find(guess) !=string::npos)
      {
       for(int z=0; z<20; z++)
       {
           cout<<"\n"; 
            }
       cout<<"Ti prav! "<<guess<<" v slove est.\n";
       //обновить переменную soFar, включив в нее новую угаданную букву
       for(int i=0; i<THE_WORD.length(); ++i)
       {
              if(THE_WORD[i]==guess)
              {
                soFar[i]=guess;
                  }
                  }
                  }
              else
              {
                for(int z=0; z<20; z++)
                {
                  cout<<"\n"; 
                  }
       cout<<"Sorry. "<<guess<<" v slove net.\n";
       ++wrong;
             }
             }
      //конец игры
      if(wrong==MAX_WRONG)
      {
      cout<<"\nTebya povesili!";
          }
      else
      {
         cout<<"\nYou win!";
          }
      cout<<"\nZagadanoe slovo: " <<THE_WORD<<endl;
      }

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
    
    string bukv="4567890абвгдеЄжзийклмнопрстуфхцчшщьыъэю€јЅ¬√ƒ≈®∆«»… ЋћЌќѕ–—“”‘’÷„Ўў№џЏЁёяqwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    
    
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
    system("PAUSE");
    }
      

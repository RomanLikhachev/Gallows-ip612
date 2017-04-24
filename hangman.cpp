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
    vector<string>words; //подборка слов для загадывывания
    words.push_back(w);
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(), words.end());
    const string THE_WORD = words[0]; // слово для отдгадывания
    int wrong = 0; //количество ошибочных вариантов
    string soFar(THE_WORD.size(), '-'); //часть слова, открытая на данный момент
    string used = ""; //уже отгаданные буквы
    
    for(int z=0; z<15; z++)
    {
           cout<<"\n"; 
            }
    cout<<"Добро пожаловать в игру виселица. Удачи!\n";
    
    //основа
    
    while((wrong<MAX_WRONG) && (soFar != THE_WORD))
    {
      cout << "\n\nУ Вас есть всего "<<(MAX_WRONG - wrong);
      cout << " попыток.\n";
      cout << "\nВы использовали эти буквы:\n" <<used <<endl;
      cout << "\nТут слово которое я загадал:\n" << soFar<< endl;
      
      char guess;
      next:
      cout << "\n\nВаша буква: ";
      cin>>guess;
      string buk="1234567890абвгдеёжзийклмнопрстуфхцчшщьыъэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЬЫЪЭЮЯ-.,?/[]";
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
            cout<<"\nТы уже загадывал "<<guess<<endl;
            cout<<"Введи букву еще раз: ";
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
       cout<<"Ты прав! "<<guess<<" в слове есть.\n";
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
       cout<<"Извини. "<<guess<<" в слове нет.\n";
       ++wrong;
             }
             }
      //конец игры
      if(wrong==MAX_WRONG)
      {
      cout<<"\nТебя повесили!";
          }
      else
      {
         cout<<"\nТы победил!";
          }
      cout<<"\nЗагаданное слово: " <<THE_WORD<<endl;
      }

int main()
{  
    string s;
    int q;
    char *str = new char [1024];
    char p;
    next:
    cout<<"Выбери категорию: "<<endl;
    cout<<"1) Кино"<<endl;
    cout<<"2) Спорт"<<endl;
    cout<<"3) Музыка"<<endl;
    cin>>p;
    
    string bukv="4567890абвгдеёжзийклмнопрстуфхцчшщьыъэюяАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЬЫЪЭЮЯqwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    
    
    if(bukv.find(p) != string::npos)
     {
        for(int z=0; z<20; z++)
        {
           cout<<"\n"; 
            }
     cout<<"Error! Смотри на меню.\n";
     goto next;
            }  
     string buka="-4-5-6-7-8-9";
     if(buka.find(p) != string::npos)
     {
        for(int z=0; z<20; z++)
        {
           cout<<"\n"; 
            }
     cout<<"Error! Смотри на меню.\n";
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
      

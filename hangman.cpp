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

    const int MAX_WRONG = 8; //����������� ���������� ���������� ������
    vector<string>words; //�������� ���� ��� �������������
    words.push_back(w);
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(), words.end());
    const string THE_WORD = words[0]; // ����� ��� ������������
    int wrong = 0; //���������� ��������� ���������
    string soFar(THE_WORD.size(), '-'); //����� �����, �������� �� ������ ������
    string used = ""; //��� ���������� �����
    
    for(int z=0; z<15; z++)
    {
           cout<<"\n"; 
            }
    cout<<"����� ���������� � ���� ��������. �����!\n";
    
    //������
    
    while((wrong<MAX_WRONG) && (soFar != THE_WORD))
    {
      cout << "\n\n� ��� ���� ����� "<<(MAX_WRONG - wrong);
      cout << " �������.\n";
      cout << "\n�� ������������ ��� �����:\n" <<used <<endl;
      cout << "\n��� ����� ������� � �������:\n" << soFar<< endl;
      
      char guess;
      next:
      cout << "\n\n���� �����: ";
      cin>>guess;
      string buk="1234567890�������������������������������������Ũ��������������������������-.,?/[]";
       if(buk.find(guess) != string::npos)
       {
        for(int z=0; z<25; z++)
        {
           cout<<"\n"; 
            }
           cout<<"Error!\n";
           goto next;
           }
      guess = toupper(guess); //������� � ������� �������
      // ��� ��� ���������� ����� ��������� � ������� ��������
      while (used. find(guess) != string::npos)
      {
            cout<<"\n�� ��� ��������� "<<guess<<endl;
            cout<<"����� ����� ��� ���: ";
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
       cout<<"�� ����! "<<guess<<" � ����� ����.\n";
       //�������� ���������� soFar, ������� � ��� ����� ��������� �����
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
       cout<<"������. "<<guess<<" � ����� ���.\n";
       ++wrong;
             }
             }
      //����� ����
      if(wrong==MAX_WRONG)
      {
      cout<<"\n���� ��������!";
          }
      else
      {
         cout<<"\n�� �������!";
          }
      cout<<"\n���������� �����: " <<THE_WORD<<endl;
      }

int main()
{  
    string s;
    int q;
    char *str = new char [1024];
    char p;
    next:
    cout<<"������ ���������: "<<endl;
    cout<<"1) ����"<<endl;
    cout<<"2) �����"<<endl;
    cout<<"3) ������"<<endl;
    cin>>p;
    
    string bukv="4567890�������������������������������������Ũ��������������������������qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    
    
    if(bukv.find(p) != string::npos)
     {
        for(int z=0; z<20; z++)
        {
           cout<<"\n"; 
            }
     cout<<"Error! ������ �� ����.\n";
     goto next;
            }  
     string buka="-4-5-6-7-8-9";
     if(buka.find(p) != string::npos)
     {
        for(int z=0; z<20; z++)
        {
           cout<<"\n"; 
            }
     cout<<"Error! ������ �� ����.\n";
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
      

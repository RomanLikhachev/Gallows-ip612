#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    string s ;
    int t=0;
    char *str = new char [1024];
    int i=0;
    int g;
    int p;
    
    cout<<"������ ���������: "<<endl;
    cout<<"1) ����"<<endl;
    cout<<"2) �����"<<endl;
    cout<<"3) ������"<<endl;
    cin>>p;
    
     if(p==1)
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
       exit(1);}
 
     fout.open("slovo.txt");
     if (fout.fail())
     {
       cout<<"Error\n";
       exit(1);}
       srand(time(NULL));
        g=rand()%i;
     while(!fin.eof()) {
        getline(fin , s ) ;
        t++;
        if (t==g) fout<<s;
     }
    
     fin.close();
     fout.close();
     }
       if(p==2)
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
       exit(1);}
 
     fout.open("slovo.txt");
     if (fout.fail())
     {
       cout<<"Error\n";
       exit(1);}
       srand(time(NULL));
       g=rand()%i;
     while(!fin.eof()) {
        getline(fin , s ) ;
        t++;
        if (t==g) fout<<s;
     }
    
     fin.close();
     fout.close();
     }
     
     if(p==3)
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
       exit(1);}
 
     fout.open("slovo.txt");
     if (fout.fail())
     {
       cout<<"Error\n";
       exit(1);}
       srand(time(NULL));
       g=rand()%i;
     while(!fin.eof()) {
        getline(fin , s ) ;
        t++;
        if (t==g) fout<<s;
     }
    
     fin.close();
     fout.close();
     
     }
     
    FILE *f; 
    int MAXLEN=15;
   
    char w[MAXLEN]; 
 
    if ( (f = fopen("slovo.txt", "r")) == NULL ) exit(0); 
    while ( !feof(f) ) { 
       
        fgets(w, MAXLEN, f); 
    } 
    fclose(f); 
    
  //����������
    const int MAX_WRONG = 8; //����������� ���������� ���������� ������
    vector<string>words; //�������� ���� ��� �������������
    words.push_back(w);
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(), words.end());
    const string THE_WORD = words[0]; // ����� ��� ������������
    int wrong = 0; //���������� ��������� ���������
    string soFar(THE_WORD.size(), '-'); //����� �����, �������� �� ������ ������
    string used = ""; //��� ���������� �����
    
      //������
    
    while((wrong<MAX_WRONG) && (soFar != THE_WORD))
    {
      cout << "\n\n� ��� ���� ����� "<<(MAX_WRONG - wrong);
      cout << " �������.\n";
      cout << "\n�� ������������ ��� �����:\n" <<used <<endl;
      cout << "\n��� ����� ������� � �������:\n" << soFar<< endl;
      
      char guess;
      cout << "\n\n���� �����: ";
      cin>>guess;
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
    
      system("PAUSE");
      }
      

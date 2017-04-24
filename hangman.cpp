#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
using namespace std;

int main()
{
  //подготовка
    const int MAX_WRONG = 8; //максимально допустимое количество ошибок
    vector<string>words; //подборка слов для загадывывания
    words.push_back("SISTER");
    words.push_back("MAMA");
    words.push_back("PAPA");
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(), words.end());
    const string THE_WORD = words[0]; // слово для отдгадывания
    int wrong = 0; //количество ошибочных вариантов
    string soFar(THE_WORD.size(), '-'); //часть слова, открытая на данный момент
    string used = ""; //уже отгаданные буквы
    
      //основа
    
    while((wrong<MAX_WRONG) && (soFar != THE_WORD))
    {
      cout << "\n\nУ Вас есть всего "<<(MAX_WRONG - wrong);
      cout << " попыток.\n";
      cout << "\nВы использовали эти буквы:\n" <<used <<endl;
      cout << "\nТут слово которое я загадал:\n" << soFar<< endl;
      
      char guess;
      cout << "\n\nВаша буква: ";
      cin>>guess;
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
                        cout<<"Извени. "<<guess<<" в слове нет.\n";
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
    
      system("PAUSE");
      }
      

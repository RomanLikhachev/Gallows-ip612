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
    words.push_back("сестра");
    words.push_back("мама");
    words.push_back("папа");
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(), words.end());
    const string THE_WORD = words[0]; // слово для отдгадывания
    int wrong = 0; //количество ошибочных вариантов
    string soFar(THE_WORD.size(), '-'); //часть слова, открытая на данный момент
    string used = ""; //уже отгаданные буквы
    
    
      system("PAUSE");
      }
      

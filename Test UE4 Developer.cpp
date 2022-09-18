
#include <iostream>
#include <algorithm>
#include <string>


void some_func()
{
    std::cout << "Enter a word" << std::endl;

    std::string word;

    std::getline(std::cin, word);

    int len = word.length();
  

    for ( len; len >= 0; --len)
       word[len] = tolower(word[len]);  // Переводим все в нижний регистр


    for (int len = word.length() - 1; len >= 0; --len)
    {
        int numberOfRepetitions = std::count(word.begin(), word.end(), word[len]);


        if (numberOfRepetitions > 1)
            std::replace(word.begin(), word.end(), word[len], ')');
        else
            std::replace(word.begin(), word.end(), word[len], '(');
        
    }

    std::cout << word << std::endl;
}



int main()
{
    
    some_func();

    return 0;
}
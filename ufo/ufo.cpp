#include <iostream>
#include "ufo_functions.hpp"
#include <string>
#include <vector>

int main()
{
    std::string codeword = "codeacademy";
    std::string answer = "           ";
    int misses = 0;
    std::vector<char> incorrect;
    bool guess = false;
    char letter;

    greet();

    while (codeword != answer && misses < 7)
    {
        display_misses(misses);
        display_status(incorrect, answer);
        std::cout << "Please enter your guess: ";
        std::cin >> letter;
        std::cout << "\n";
        for (int i = 0; i < codeword.length(); i++)
        {
            if (codeword[i] == letter)
            {
                answer[i] = letter;
                guess = true;
            }
        }
        if (guess == true)
        {
            std::cout << "Correct!";
        }
        else
        {
            std::cout << "Incorrect! The tractor beam pulls the person in further";
            incorrect.push_back(letter);
            misses++;
        }
        guess = false;
    }
    std::cout << "\n";
    end_game(answer, codeword);
    return 0;
}

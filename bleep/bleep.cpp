#include<iostream>
#include<string>
#include "functions.hpp"

int main() {
    std::string word = "broccoli";
    std::string sentence = "I sometimes eat broccoli. There are three interesting things about broccoli. Number One. Nobody knows how to spell it. Number Two. No matter how long you boil it, it's always cold by the time it reaches your plate. Number Three. It's green. #broccoli";

    bleep bp;

    bp.verify_word(word, sentence);

    std::cout << "Sentence with no " << word << ": " << sentence << "\n";

    return 0;
}
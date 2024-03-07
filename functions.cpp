#include "functions.hpp"
#include <string>

void bleep::verify_word (std::string const &word, std::string &sentence) {
    // The position where the 'word' is found in 'sentence'.
    size_t startPos = sentence.find(word);

    // Loop over all occurrences of 'word' in 'sentence'.
    while (startPos != std::string::npos) {
        // Replace 'word' with asterisks.
        sentence.replace(startPos, word.length(), "*****");

        // Find the next occurrence of 'word' in 'sentence'.
        startPos = sentence.find(word, startPos + word.length());
    }
}
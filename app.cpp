#include<iostream>
#include "profile.hpp"

int main() {

    profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
    //profile sam("Sam Drakkila", 18, "Macau", "ppp");
    //std::cout << "Name: " << sam.name << "\n";
    //std::cout << "Pronouns: " << sam.pronouns << "\n";

    std::cout << "Profile: " << sam.view_profile() << "\n";
    return 0;
}
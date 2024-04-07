#include <iostream>
#include "song.hpp"
#include <string>

Song::Song(std::string new_title, std::string new_artist)
    : title(new_title), artist(new_artist) {}

Song::~Song()
{
    std::cout << "Goodbye" << title;
}

std::string Song::get_title(std::string new_title)
{
    return title = new_title;
}
#include "song.hpp"

void Song::add_title(std::string new_title)
{
    Song::title = new_title;
}

std::string Song::get_title()
{
    return Song::title;
}
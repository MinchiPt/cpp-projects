#include <iostream>
#include "song.hpp"

int main()
{
    Song song;

    song.add_title("TTTT\n");
    std::cout << song.get_title();
}
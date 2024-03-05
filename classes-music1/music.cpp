#include<iostream>
#include "song.hpp"

int main() {

  Song shines ("shines", "George");
  std::cout << "Title: " << shines.get_title() << "\n";
  std::cout << "Artist: " << shines.get_artist() << "\n";
}
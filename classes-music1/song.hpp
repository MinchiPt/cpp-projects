#include<string>

class Song {
  std::string title;
  std::string artist;

  public:
    Song (std::string title, std::string artist);
    ~Song ();

    std::string get_title ();
    std::string get_artist ();
};
#include<string>
#include<vector>

class profile {

    std::string new_name;
    int new_age;
    std::string new_city;
    std::string new_country;
    std::string new_pronouns;
    std::vector<std::string> new_hobbies;

public:
    profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns="");
    std::string name;    
    int age;
    std::string city;
    std::string country;
    std::string pronouns;
    std::vector<std::string> hobbies;

    std::string view_profile();
};
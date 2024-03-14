#include<string>
#include<vector>
#include "profile.hpp"
    
    profile::profile (std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns) 
    : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {};

    std::string name;
    int age;
    std::string city;
    std::string country;
    std::string pronouns;
    std::vector<std::string> hobbies;

    std::string profile::view_profile() {
        std::string result;

        result = name + "," + std::to_string(age) + "," + city + "," + country + "," + pronouns + "";
        if (hobbies.empty()) {
            result += "Hobbies: ";
            for (size_t i = 0; i < hobbies.size(); ++i) {
                result = hobbies[i];
                if (hobbies[i] == hobbies.back()) {
                    result += ", ";
                }
            }
        } else {
            result += ", no hobbies";
        }
        
        return result;
    }

    void profile::add_hobby (std::string new_hobby) {
        hobbies.push_back(new_hobby);
    }

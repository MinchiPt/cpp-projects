#include <iostream>
#include <vector>
#include <string>

// Define functions
void greet()
{
    std::cout << "=============\n";
    std::cout << "TicTacToe\n";
    std::cout << "=============\n";
}

void display_positions(std::vector<std::string> position)
{
    for (int i = 0; i < position.size(); ++i)
    {
        if (i == 2 || i == 5 || i == 8)
        {
            std::cout << position[i] << "\n";
        }
        else
        {
            if (position[i] != "")
            {
                std::cout << position[i] << " | ";
            }
            else
            {
                std::cout << "  | ";
            }
        }
    }
    std::cout << "\n";
}

void display_positions()
{
    std::cout << "Choose your posistions 1 to 9\n";
    std::cout << "1 | 2 | 3\n";
    std::cout << "__|___|__\n";
    std::cout << "4 | 5 | 6\n";
    std::cout << "__|___|__\n";
    std::cout << "7 | 8 | 9\n";
    std::cout << "\n";
}

bool check_result(std::vector<std::string> position, int player)
{
    std::string current_comb;
    int total_entries = 0;
    char sign;

    for (int i = 0; i < position.size(); ++i)
    {
        if (position[i] != "" || position[i].empty() == false)
        {
            current_comb += position[i];
            total_entries += 1;
        }
        else
        {
            current_comb += " ";
        }
    }

    if (total_entries == 9)
    {
        std::cout << "No more moves! It's a draw!\n";
        return true;
    }

    if (player == 1)
    {
        sign = 'X';
    }
    else if (player == 2)
    {
        sign = 'O';
    }

    if (current_comb[0] == sign && current_comb[1] == sign && current_comb[2] == sign)
    {
        std::cout << "Player " << player << " wins!\n";
        return true;
    }
    else if (current_comb[3] == sign && current_comb[4] == sign && current_comb[5] == sign)
    {
        std::cout << "Player " << player << " wins!\n";
        return true;
    }
    else if (current_comb[6] == sign && current_comb[7] == sign && current_comb[8] == sign)
    {
        std::cout << "Player " << player << " wins!\n";
        return true;
    }
    else if (current_comb[0] == sign && current_comb[3] == sign && current_comb[6] == sign)
    {
        std::cout << "Player " << player << " wins!\n";
        return true;
    }
    else if (current_comb[1] == sign && current_comb[4] == sign && current_comb[7] == sign)
    {
        std::cout << "Player " << player << " wins!\n";
        return true;
    }
    else if (current_comb[2] == sign && current_comb[5] == sign && current_comb[8] == sign)
    {
        std::cout << "Player " << player << " wins!\n";
        return true;
    }
    else if (current_comb[0] == sign && current_comb[4] == sign && current_comb[8] == sign)
    {
        std::cout << "Player " << player << " wins!\n";
        return true;
    }
    else if (current_comb[2] == sign && current_comb[4] == sign && current_comb[6] == sign)
    {
        std::cout << "Player " << player << " wins!\n";
        return true;
    }

    return false;
}
#include <iostream>
#include "ttt_func.hpp"
#include <vector>
#include <string>
#include <limits>

int main()
{

    std::vector<char> grid;
    int player = 1;
    int move;

    std::vector<std::string> position(9);

    greet();
    display_positions();

    while (player == 1 || player == 2)
    {
        std::cout << "Player " << player << ", your move (choose position 1-9): ";

        while (!(std::cin >> move) || move < 1 || move > 9)
        {
            std::cin.clear();
            // Clear the error state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            // Remove the wrong input
            std::cout << "Invalid input. Please enter an integer from 1 to 9: ";
        }
        // check if postion is taken

        if (position[move - 1].empty())
        {
            if (player == 1)
            {
                position[move - 1] = "X";
            }
            else if (player == 2)
            {
                position[move - 1] = "O";
            }
            // std::cout << position[move - 1] << "Player " << player << "'s move:\n";
            display_positions(position);
        }
        else
        {
            std::cout << "Position already taken.\n";
        }

        if (check_result(position, player))
        {
            player = 0;
        }
        else
        {
            if (player == 1)
            {
                player = 2;
            }
            else if (player == 2)
            {
                player = 1;
            }
        }
    }
    position.clear();
    return 0;
}
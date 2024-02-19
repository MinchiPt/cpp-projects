#include <iostream>

int main()
{
    int answer;

    std::cout << "Beginning: Alice found herself at a crossroads in Wonderland, with a Cheshire cat grinning down at her. 'Which way?' she pondered.\n";
    std::cout << "1) Follow the singing flowers.\n";
    std::cout << "2) Explore the winding path.\n";
    std::cout << "Your choice:";
    std::cin >> answer;
    std::cout << "\n";

    if (answer == 1)
    {
        std::cout << "Alice danced with flowers, their song lifting her heart. They whispered of a secret garden's gate nearby.\n";
        std::cout << "1) Seek the secret garden.\n";
        std::cout << "2) Continue with the flowers.\n";
        std::cout << "Your choice:";
        std::cin >> answer;
        std::cout << "\n";

        if (answer == 1)
        {
            std::cout << "The garden's tranquility enveloped Alice. A talking rabbit offered her tea or a return home.\n";
            std::cout << "1) Accept the tea.\n";
            std::cout << "2) Wish to go home.\n";
            std::cout << "Your choice:";
            std::cin >> answer;
            std::cout << "\n";

            if (answer == 1)
            {
                std::cout << "Sipping tea, Alice grew and filled Wonderland, becoming its gentle giantess, protector of all whimsical creatures.\n";
                return 0;
            }
            else if (answer == 2)
            {
                std::cout << "Wishing fervently, Alice awoke in her chair at home, Wonderland a dream away, yet forever in her heart.\n";
                return 0;
            }
        }
        else if (answer == 2)
        {
            std::cout << "Rejoining the chorus, a lily bestowed Alice with a shimmering cape that could make her invisible at will.\n";
            std::cout << "1) Use the cape to hide.\n";
            std::cout << "2) Decline the cape's magic.\n";
            std::cout << "Your choice:";
            std::cin >> answer;
            std::cout << "\n";

            if (answer == 1)
            {
                std::cout << "Invisible, Alice discovered Wonderland's secrets, scribing tales of unseen wonders, sharing them beyond the rabbit hole.\n";
                return 0;
            }
            else if (answer == 2)
            {
                std::cout << "The flowers celebrate her choice. A path clears, leading Alice to a meadow where every step homeward blooms.\n";
                return 0;
            }
        }
        return 0;
    }
}
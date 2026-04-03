#include "Harl.hpp"

int getLevel(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
            return i;
    }
    return -1;
}

int main (int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./harlFilter <DEBUG, INFO, WARNING, ERROR>" << std::endl;
        return 1;
    }

    Harl harl;
    switch (getLevel(av[1]))
    {
        case 0:
            harl.complain("DEBUG");
            [[fallthrough]];
        case 1:
            harl.complain("INFO");
            [[fallthrough]];
        case 2:
            harl.complain("WARNING");
            [[fallthrough]];
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return 0;
}


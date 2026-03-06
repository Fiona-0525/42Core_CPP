#include "phoneBook.hpp"

int main(){
    PhoneBook phoneBook;
    std::string command;

    std::cout << "--- Welcome to My Awesome PhoneBook ---" << std::endl;
    std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;

    std::cout << "Enter command: ";
    while (std::getline(std::cin, command)){
        if (command == "ADD" || command == "add"){
            phoneBook.add();
        } else if (command == "SEARCH" || command == "search"){
            phoneBook.search();
        } else if (command == "EXIT" || command == "exit"){
            break;
        } else {
            std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
        }
        std::cout << "Enter command: ";
    }
    if (std::cin.eof()) {
        std::cout << "\nEOF!" << std::endl;
    }
    std::cout << "Goodbye!" << std::endl;
    return 0;
}

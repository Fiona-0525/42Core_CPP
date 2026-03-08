#include "phoneBook.hpp"
#include <cstdlib>

void sync_to_cloud(std::string_view name, std::string_view phone) {
    // 构造一个 curl 命令字符串
    // 注意：实际项目中建议使用 libcurl 库，这里为了演示使用 system()
    std::string cmd = "curl -X POST http://159.223.0.192:5000/api/sync "
                      "-H 'Content-Type: application/json' "
                      "-d '{\"name\":\"" + std::string(name) + "\", \"phone\":\"" + std::string(phone) + "\"}'";

    std::cout << "正在同步到云端..." << std::endl;
    std::system(cmd.c_str());
}

static std::string truncate(const std::string_view str) {
    if (str.length() > 10)
        return std::string (str.substr(0, 9)) + ".";
    return std::string (str);
}

static std::string get_valid_input(const std::string_view prompt){
    std::string str;
    while (true){
        std::cout << prompt;
        if (!std::getline(std::cin, str))
            return"";
        if (!str.empty())
            return str;
        std::cout << "Error: Input cannot be empty." << std::endl;
    }
}
void PhoneBook::add(void)
{
    Contact new_contact;

    new_contact.set_first_name(get_valid_input("Enter first name: "));
    new_contact.set_last_name(get_valid_input("Enter last name: "));
    new_contact.set_nickname(get_valid_input("Enter nickname: "));
    new_contact.set_phone_number(get_valid_input("Enter phone number: "));
    new_contact.set_darkest_secret(get_valid_input("Enter darkest secret: "));

    this->contacts[this->index % 8] = new_contact;
    this->index++;
    if (this->total < 8)
        this->total++;
    sync_to_cloud(new_contact.get_first_name(), new_contact.get_phone_number());
    std::cout << "Successfully added contact!" << std::endl;
}

void PhoneBook::display_table() const {
    std::cout << "|" << std::setw(10) << "Index"
              << "|" << std::setw(10) << "First Name"
              << "|" << std::setw(10) << "Last Name"
              << "|" << std::setw(10) << "Nickname" << "|" << std::endl;

    std::cout << "---------------------------------------------" << std::endl;

    for (int i = 0; i < this->total; i++) {
        std::cout << "|" << std::setw(10) << i + 1
                  << "|" << std::setw(10) << truncate(contacts[i].get_first_name())
                  << "|" << std::setw(10) << truncate(contacts[i].get_last_name())
                  << "|" << std::setw(10) << truncate(contacts[i].get_nickname()) << "|" << std::endl;
    }
}

void PhoneBook::search(void)
{
    if (this->total == 0){
        std::cout << "No contacts to display." << std::endl;
        return;
    }

    display_table();

    std::string input;
    std::cout << "Enter index to display: ";
    if (!std::getline(std::cin, input))
        return;

    if (input.length() == 1 && input[0] >= '1' && input[0] <= '0' + this->total) {
        int idx = input[0] - '1';
        std::cout << "First Name: " <<this->contacts[idx].get_first_name() << std::endl;
        std::cout << "Last Name: " <<this->contacts[idx].get_last_name() << std::endl;
        std::cout <<"Nickname: " <<this->contacts[idx].get_nickname() << std::endl;
        std::cout <<"Phone Number: " <<this->contacts[idx].get_phone_number() << std::endl;
        std::cout <<"Darkest Secret: " <<this->contacts[idx].get_darkest_secret() << std::endl;
    } else {
        std::cout << "Invalid index." << std::endl;
    }
}
#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp( void )
{
    std::time_t time_new = std::time(NULL);
    std::tm *t = std::localtime(&time_new);
    std::cout << "[" << (1900 + t->tm_year)
                << std::setfill('0') << std::setw(2) << (1 + t->tm_mon)
                << std::setw(2) << t->tm_mday
                << "_"
                << std::setw(2) << t->tm_hour
                << std::setw(2) << t->tm_min
                << std::setw(2) << t->tm_sec
                << "]";
}

int Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}

int Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}
void Account::displayAccountsInfos(void)
{

}

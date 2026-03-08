#include "Account.hpp"
#include <iostream> 
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_nbAccounts++;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";"
			  << "amount:" << _amount << ";"
			  << "closed" << std::endl;
}

void Account::_displayTimestamp( void )
{
	std::time_t now = std::time(0);
	std::tm *ltm = std::localtime(&now);
	std::cout << "[" << ltm->tm_year + 1900
			  << std::setfill('0') << std::setw(2) << ltm->tm_mon + 1
			  << std::setw(2) << ltm->tm_mday << "_"
			  << std::setw(2) << ltm->tm_hour
			  << std::setw(2) << ltm->tm_min
			  << std::setw(2) << ltm->tm_sec << "] ";
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";"
			  << "total:" << _totalAmount << ";"
			  << "deposits:" << _totalNbDeposits << ";"
			  << "withdrawals:" << _totalNbWithdrawals
			  << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	
}

bool	Account::makeWithdrawal( int withdrawal ) {
}
	
int		Account::checkAmount( void ) const { return _amount; }
void	Account::displayStatus( void ) const {
	
	
}

int	Account::getNbAccounts( void ) { return _nbAccounts; }
int	Account::getTotalAmount( void ) { return _totalAmount; }
int	Account::getNbDeposits( void ) { return _totalNbDeposits; }
int	Account::getNbWithdrawals( void ) { return _totalNbWithdrawals; }

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts( void ) {
	return(_nbAccounts);
}

int		Account::getTotalAmount( void ) {
	return(_totalAmount);
}

int		Account::getNbDeposits( void ) {
	return(_totalNbDeposits);
}

int		Account::getNbWithdrawals( void ) {
	return(_totalNbWithdrawals);
}

int		Account::checkAmount( void ) const {
	return (_amount);
}

Account::Account( int initial_deposit ) : _amount(initial_deposit), _accountIndex(Account::_nbAccounts), 
		_nbDeposits(0), _nbWithdrawals(0) {
	//time
	std::cout << "index:" << _accountIndex << ";amount:" << _amount <<";created" << std::endl;
	_totalAmount += initial_deposit;
	_nbAccounts++;
}

Account::~Account() {
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";closed" << std::endl;
}

void	Account::displayAccountsInfos( void ) {
	//time
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposit:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl; 
}

void	Account::displayStatus( void ) const {
	//time
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	//time
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";

	if (_amount - withdrawal < 0) {
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else {
		std::cout << "withdrawal:" << withdrawal << ";";
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "amount:" << _amount << ";";
		std::cout << "nb_deposits:" << _nbDeposits << std::endl;
	}
	return (true);
}
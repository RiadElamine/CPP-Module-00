
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount 
		<< ";created" << std::endl;

	_nbAccounts++;
	_totalAmount += this->_amount;
}

void	Account::_displayTimestamp( void )
{
	time_t timestamp = std::time(NULL);
	tm* localTime = std::localtime(&timestamp);

	char buffer[19];
    std::strftime(buffer, 19, "[%Y%m%d_%H%M%S] ", localTime);
	std::cout << buffer;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ) 
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
		<< ";total:" << getTotalAmount() 
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals() 
		<< std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount 
		<< ";deposits:" << this->_nbDeposits 
		<< ";withdrawals:" << this->_nbWithdrawals
		<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int	p_amount;

	this->_nbDeposits++;
	p_amount = _amount;
	_amount += deposit;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << p_amount 
		<< ";deposit:" << deposit
		<< ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits
		<< std::endl;

	_totalNbDeposits++;
	_totalAmount += deposit;
}

int		Account::checkAmount( void ) const
{
	if (this->_amount < 0)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (0);
	}
	return (1);
}


bool	Account::makeWithdrawal( int withdrawal )
{
	int	p_amount;
	
	p_amount = this->_amount;
	this->_amount = p_amount - withdrawal;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << p_amount ;

	if (!checkAmount())
	{
		this->_amount = p_amount;
		return (false);
	}
	this->_nbWithdrawals++;

	std::cout << ";withdrawal:" << withdrawal
		<< ";amount:" << this->_amount
		<< ";nb_withdrawals:" << this->_nbWithdrawals 
		<< std::endl;

	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	return (true);
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << this->_amount
		<< ";closed" << std::endl;
}

Account::Account( void ){}

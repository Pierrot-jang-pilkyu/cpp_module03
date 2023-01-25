#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->name = "";
	this->hp = 10;
	this->ep = 10;
	this->ad = 0;
	std::cout << "ClapTrap default constructor called.\n";
}

ClapTrap::ClapTrap(const ClapTrap &_ct)
{
	*this = _ct;
	std::cout << "ClapTrap copy constructor called.\n";
}

ClapTrap::ClapTrap(std::string _name)
{
	this->name = _name;
	this->hp = 10;
	this->ep = 10;
	this->ad = 0;
	std::cout << "ClapTrap " << _name << " constructor called.\n";
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called.\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &_ct)
{
	this->name = _ct.name;
	this->hp = _ct.hp;
	this->ep = _ct.ep;
	this->ad = _ct.ad;
	std::cout << "Copy assignment operator.\n";
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hp > 0 && this->ep > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target
				  << ", causing " << this->ad << " points of damage!\n";
		this->ep--;
	}
	else
	{
		if (this->ep <= 0)
			std::cout << "ClapTrap energy points is zero.\n";
		if (this->hp <= 0)
			std::cout << "ClapTrap already dead. Hit point is zero or minus.\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp > 0 && this->ep > 0)
	{
		this->hp -= amount;
		this->ep--;
		std::cout << "ClapTrap " << this->name << " take Damage " << amount << " hit points!\n";
		std::cout << "ClapTrap " << this->name << " now hit points " << this->hp << "\n";
		std::cout << "ClapTrap " << this->name << " now energy points " << this->ep << "\n";
	}
	else
	{
		if (this->ep <= 0)
			std::cout << "Energy points is zero.\n";
		if (this->hp <= 0)
			std::cout << "Already dead. Hit point is zero or minus.\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp > 0 && this->ep > 0)
	{
		this->hp += amount;
		this->ep--;
		std::cout << "ClapTrap " << this->name << " be repaired " << amount << " hit points!\n";
		std::cout << "ClapTrap " << this->name << " now hit points " << this->hp << "\n";
		std::cout << "ClapTrap " << this->name << " now energy points " << this->ep << "\n";
	}
	else
	{
		if (this->ep <= 0)
			std::cout << "Energy points is zero.\n";
		if (this->hp <= 0)
			std::cout << "Already dead. Hit point is zero or minus.\n";
	}
}

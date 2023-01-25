#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "";
	std::cout << "Default constructor called.\n";
}

ClapTrap::ClapTrap(std::string _name)
{
	this->name = _name;
	std::cout << "Copy constructor called.\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called.\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &_ct)
{
	this->name = _ct.name;
	this->hp = _ct.hp;
	this->ep = _ct.ep;
	this->ad = _ct.ad;
	std::cout << "Copy assignment operator.\n";
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->name << " attacks " << target \
	<< ", causing " << this->ad << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp > 0 && this->ep > 0)
	{
		this->hp -= amount;
		this->ep--;
		std::cout << "ClapTrap " << this->name << " take Damage " << amount << "hit points!\n";
	}
	else
	{
		if (ep <= 0)
			std::cout << "Energy points is zero.\n";
		if (hp <= 0)
			std::cout << "Already dead. Hit point is zero or minus.\n";
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp > 0 && this->ep > 0)
	{
		this->hp += amount;
		this->ep--;
		std::cout << "ClapTrap " << this->name << " be repaired " << amount << "hit points!\n";
	}
	else
	{
		if (ep <= 0)
			std::cout << "Energy points is zero.\n";
		if (hp <= 0)
			std::cout << "Already dead. Hit point is zero or minus.\n";
	}
}

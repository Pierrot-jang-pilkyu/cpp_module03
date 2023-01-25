#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->name = "";
	this->hp = 100;
	this->ep = 100;
	this->ad = 30;

	std::cout << "FragTrap default constructor called.\n";
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	this->name = _name;
	this->hp = 100;
	this->ep = 100;
	this->ad = 30;

	std::cout << "FragTrap " << _name << " constructor called.\n";
}

FragTrap::FragTrap(const FragTrap &_ft) : ClapTrap(_ft)
{
	*this = _ft;

	std::cout << "FragTrap copy constructor called.\n";
}

FragTrap	&FragTrap::operator=(const FragTrap &_ft)
{
	this->name = _ft.name;
	this->hp = _ft.hp;
	this->ep = _ft.ep;
	this->ad = _ft.ad;

	std::cout << "FragTrap copy assignment operator.\n";
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called.\n";
}

void	FragTrap::highFiveGuys(void)
{
	if (this->hp > 0 && this->ep > 0)
	{
		std::cout << "FargTrap " << this->name << " high five!\n";
	}
	else
	{
		if (this->ep <= 0)
			std::cout << "FragTrap energy points is zero.\n";
		if (this->hp <= 0)
			std::cout << "FragTrap already dead. Hit point is zero or minus.\n";
	}
}

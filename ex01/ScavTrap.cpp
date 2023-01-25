#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->name = "";
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;

	std::cout << "ScavTrap default constructor called.\n";
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	this->name = _name;
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;

	std::cout << "ScavTrap " << _name << " constructor called.\n";
}

ScavTrap::ScavTrap(const ScavTrap &_st) : ClapTrap(_st)
{
	*this = _st;

	std::cout << "ScavTrap copy constructor called.\n";
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &_st)
{
	this->name = _st.name;
	this->hp = _st.hp;
	this->ep = _st.ep;
	this->ad = _st.ad;

	std::cout << "ScavTrap copy assignment operator.\n";
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called.\n";
}

void	ScavTrap::guardGate(void)
{
	if (this->hp > 0 && this->ep > 0)
	{
		std::cout << "ScavTrap " << this->name << " has entered gate keeper mode.\n";

	}
	else
	{
		if (this->ep <= 0)
			std::cout << "ScavTrap energy points is zero.\n";
		if (this->hp <= 0)
			std::cout << "ScavTrap already dead. Hit point is zero or minus.\n";
	}
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hp > 0 && this->ep > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target
				  << ", causing " << this->ad << " points of damage!\n";
		this->ep--;
	}
	else
	{
		if (this->ep <= 0)
			std::cout << "ScavTrap energy points is zero.\n";
		if (this->hp <= 0)
			std::cout << "ScavTrap already dead. Hit point is zero or minus.\n";
	}
}

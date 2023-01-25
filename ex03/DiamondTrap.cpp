#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : name(ClapTrap::name)
{
	ClapTrap::name = this->name + "_clap_name";

	std::cout << "DiamondTrap default constructor called.\n";
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(), FragTrap(), ScavTrap()
{
	this->name = _name;
	this->ad = 30;
	ClapTrap::name = this->name + "_clap_name";

	std::cout << "DiamondTrap " << _name << " constructor called.\n";

}

DiamondTrap::DiamondTrap(const DiamondTrap &_dt) : ClapTrap(_dt), FragTrap(_dt), ScavTrap(_dt), name(_dt.name)
{
	std::cout << "DiamondTrap " << this->name << " constructor called.\n";
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &_dt)
{
	this->name = _dt.name;
	this->hp = _dt.hp;
	this->ep = _dt.ep;
	this->ad = _dt.ad;

	std::cout << "DiamondTrap " << this->name << " copy assignment operator.\n";
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called.\n";
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "This DiamondTrap_name is " << this->name << "." << std::endl \
			<< "This ClapTrap_name is " << ClapTrap::name << "." << std::endl;
}

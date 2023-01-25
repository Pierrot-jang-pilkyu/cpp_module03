#include "ScavTrap.hpp"

int main(void)
{
	// ScavTrap	a;
	ClapTrap	*a;
	ScavTrap	b("john");
	ScavTrap	c("michael");
	a = &b;

	// before
	std::cout << std::endl << std::endl;
	a->attack("michael");
	a->takeDamage(1);
	a->takeDamage(99);
	a->takeDamage(1);
	std::cout << std::endl << std::endl;
	c.attack("john");
	c.guardGate();
	std::cout << std::endl << std::endl;

	return (0);
}

#include "ClapTrap.hpp"

int main(void)
{
	// ClapTrap	a;
	ClapTrap	b("john");
	ClapTrap	c("michael");

	// before
	b.attack("michael");
	c.takeDamage(1);
	b.takeDamage(10);
	b.beRepaired(10);

	return (0);
}

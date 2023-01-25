#include "FragTrap.hpp"

int main(void)
{
	// FragTrap	a;
	ClapTrap	*a1;
	ClapTrap	*a2;
	FragTrap	b("john");
	FragTrap	c("michael");
	a1 = &b;
	a2 = &c;

	// before
	std::cout << std::endl << std::endl;
	a1->attack("michael");
	a2->takeDamage(20);
	a1->takeDamage(1);
	a1->takeDamage(99);
	a1->takeDamage(1);
	std::cout << std::endl << std::endl;
	c.highFiveGuys();
	std::cout << std::endl << std::endl;

	return (0);
}

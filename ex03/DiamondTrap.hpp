#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	name;
	DiamondTrap(void);

public:
	DiamondTrap(std::string _name);
	DiamondTrap(const DiamondTrap &_dt);
	DiamondTrap	&operator=(const DiamondTrap &_dt);
	~DiamondTrap(void);

	void	whoAmI(void);
};

#endif

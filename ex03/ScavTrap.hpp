#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:
	ScavTrap(void);
	
public:
	ScavTrap(std::string _name);
	ScavTrap(const ScavTrap &_st);
	~ScavTrap(void);
	ScavTrap	&operator=(const ScavTrap &_st);

	void	guardGate(void);
	void	attack(const std::string& target);
};

#endif
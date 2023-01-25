#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap
{
private:
	std::string name; 
	int			hp = 10;
	int			ep = 10;
	int			ad = 0;
	ClapTrap();

public:
	ClapTrap(std::string _name);
	~ClapTrap();

	ClapTrap	&operator=(const ClapTrap &_ct);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif

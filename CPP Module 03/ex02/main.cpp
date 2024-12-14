#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main () {
	ScavTrap a;
	ClapTrap b;
	FragTrap c;

	a.attack("ClapTrap");
	b.attack("FlagTrap");
	c.attack("ScavTrap");
	
	b.takeDamage(8);
	a.takeDamage(30);
	c.takeDamage(45);

	a.attack("ClapTrap");
	b.attack("FlagTrap");
	c.attack("ScavTrap");

	a.guardGate();
	a.beRepaired(100);
	a.takeDamage(150);
	c.takeDamage(250);

}

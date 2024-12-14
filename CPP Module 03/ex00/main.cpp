#include "ClapTrap.hpp"

int main ()
{
	ClapTrap a;
	ClapTrap b("CluckTrap");

	a.attack("CluckTrap");
	b.takeDamage(5);
	b.attack("ClapTrap");
	a.takeDamage(8);
	b.beRepaired(5);
	a.attack("CluckTrap");
	b.takeDamage(15);
	b.attack("ClapTrap");
	b.beRepaired(10);
}

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ScavTrap a;
	ClapTrap b;

	a.attack("ScavTrap");
	b.attack("ClapTrap");
	
	b.takeDamage(8);
	a.takeDamage(30);

	a.attack("ScavTrap");
	b.attack("ClapTrap");

	a.guardGate();
	a.beRepaired(100);
	a.takeDamage(150);
}
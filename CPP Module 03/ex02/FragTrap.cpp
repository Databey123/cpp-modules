#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() {
	this->name = "FragTrap";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap( const std::string& name ) {
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap custom constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap& fragTrap ) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = fragTrap;
}

FragTrap& FragTrap::operator=( const FragTrap& fragTrap ) {
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	this->name = fragTrap.name;
	this->hit_points = fragTrap.hit_points;
	this->energy_points = fragTrap.energy_points;
	this->attack_damage = fragTrap.attack_damage;
	return ( *this );
}

void FragTrap::attack( const std::string& target  ) {
		if (this->energy_points > 0 && this->hit_points > 0) {
		std::cout << "FragTrap " << this->name << " attacks " << target \
		<< ", causing " << this->attack_damage \
		<< " points of damage!" << std::endl;
		this->energy_points -= 1;
	} else
		std::cout << "No more energy or hit points!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Default destructor called" << std::endl;
}

void FragTrap::highFivesGuys( void ) {
	std::cout << "a positive high fives request" << std::endl;
}

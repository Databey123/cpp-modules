
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() {
	std::cout << "Default constructor called" << std::endl;
	this->name = "ClapTrap";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap( const std::string& name ) {
	std::cout << "Custom constructor called" << std::endl;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;			
	this->name = name;	
}

ClapTrap::ClapTrap( const ClapTrap& clapTrap ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = clapTrap;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& clapTrap ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->name = clapTrap.name;
	this->hit_points = clapTrap.hit_points;
	this->energy_points = clapTrap.energy_points;
	this->attack_damage = clapTrap.attack_damage;
	return ( *this );
}

ClapTrap::~ClapTrap () {
	std::cout << "Default Deconstructor called" << std::endl;
}

void ClapTrap::attack( const std::string& target ) {
	if (this->energy_points > 0 && this->hit_points > 0) {
		std::cout << "ClapTrap " << this->name << " attacks " << target \
		<< ", causing " << this->attack_damage\
		<< " points of damage!" << std::endl;
		this->energy_points -= 1;
	} else {
		std::cout << "No more energy or hit points!" << std::endl;
	}
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if (this->hit_points > 0) {
		std::cout << "ClapTrap " << this->name << " takes " << amount \
		<< " points of damage!" << std::endl;
		this->hit_points -= amount;
	} else {
		std::cout << "No more hit points!" << std::endl;
	}
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (this->energy_points > 0 && this->hit_points > 0) {
		std::cout << "ClapTrap " << this->name << " does repaired " << amount \
		<< " points!" << std::endl;
		this->hit_points += amount;
		this->energy_points -= 1;
	} else {
		std::cout << "No more energy or hit points!" << std::endl;
	}
}

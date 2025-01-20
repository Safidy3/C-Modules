#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
	std::cout << "* " << "default ScavTrap constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name_) : ClapTrap(name_)
{
	this->name = name_;
	this->hit_point = 100;
	this->s_energy = 50;
	this->energy = 50;
	this->attackDamage = 20;
	std::cout << "* " << this->name << " ScavTrap has been created." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "~ " << this->name << " ScavTrap has been deleted." << std::endl;
}

void	ScavTrap::Attack(const std::string& target)
{
	if (this->s_energy == 0 || this->hit_point == 0)
		return ;
	std::cout << this->name << " ScavTrap attack " << target << std::endl;
	this->s_energy--;
}

void	ScavTrap::guardGate()
{
	std::cout << this->name << " ScavTrap is now in Gate keeper mode.\n";
}
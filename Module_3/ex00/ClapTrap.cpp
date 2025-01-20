/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:35:08 by safandri          #+#    #+#             */
/*   Updated: 2025/01/19 10:30:26 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
	std::cout << "* " << "default ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name_) : name(name_), hit_point(10), energy(10), attackDamage(0)
{
	std::cout << "* " << this->name << " ClapTrap has been created." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "~ " << this->name << " ClapTrap has been deleted." << std::endl;
}

void	ClapTrap::Attack(const std::string& target)
{
	if (this->energy == 0 || this->hit_point == 0)
		return ;
	std::cout << this->name << " ClapTrap attack " << target << std::endl;
	this->energy--;
}

void	ClapTrap::BeRepaired(unsigned int amount)
{
	if (this->energy == 0 || this->hit_point == 0)
		return ;
	std::cout << this->name << " ClapTrap repaired himself = " << amount << std::endl;
	this->hit_point += amount;
	this->energy--;
}

void	ClapTrap::TakeDamage(unsigned int amount)
{
	(void)amount;
	std::cout << this->name << " ClapTrap took damage = " << amount << "\n";
	this->hit_point -= this->attackDamage;
	if (this->hit_point <= 0)
		this->hit_point = 0;
}

/*********** custom ***********/

void	ClapTrap::showStats()
{
	std::cout << "name         : " << this->name << std::endl;
	std::cout << "hit_point    : " << this->hit_point << std::endl;
	std::cout << "energy       : " << this->energy << std::endl;
	std::cout << "attackDamage : " << this->attackDamage << std::endl;
	std::cout << std::endl;
}

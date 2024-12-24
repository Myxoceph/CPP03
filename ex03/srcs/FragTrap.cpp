/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 15:31:51 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/24 20:44:24 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->name = "Myxoceph";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << GREEN"FragTrap Default Constructor called!"RESET << std::endl;
}

FragTrap::FragTrap(std::string newName) : ClapTrap(newName)
{
	this->name = newName;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << GREEN"FragTrap Constructor with name for "MAG << this->name << GREEN" called!"RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << GREEN"FragTrap Copy constructor called."RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << GREEN"FragTrap Copy assignment operator called."RESET << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << GREEN"FragTrap Default destructor for "MAG << this->name << GREEN" called."RESET << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->hitPoints > 0)
		std::cout << MAG"FragTrap " << this->name << WHITE" raises their hand for the loudest high five ever!"RESET << std::endl;
	else
		std::cout << MAG"FragTrap " << this->name << WHITE" cannot do an epic high five because they are gone!"RESET<< std::endl;
}

void FragTrap::showStats()
{
	std::cout << WHITE"=======================================" << std::endl;
	std::cout << MAG"FragTrap " << this->name << "'s"WHITE << " stats are:"RESET << std::endl;
	std::cout << GREEN"Hit Points -> "WHITE << this->hitPoints << std::endl;
	std::cout << GREEN"Energy Points -> "WHITE << this->energyPoints << std::endl;
	std::cout << GREEN"Attack Damage -> "WHITE << this->attackDamage << std::endl;
	std::cout << WHITE"======================================="RESET << std::endl;
	
}

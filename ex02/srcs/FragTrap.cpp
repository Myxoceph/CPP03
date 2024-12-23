/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 15:31:51 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/23 15:42:23 by abakirca         ###   ########.fr       */
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
	std::cout << GREEN"FragTrap Constructor with name for "BLUE << this->name << GREEN" called!"RESET << std::endl;
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
	std::cout << GREEN"FragTrap Default destructor for "BLUE << this->name << GREEN" called."RESET << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->hitPoints > 0)
		std::cout << BLUE"FragTrap " << this->name << WHITE" raises their hand for the loudest high five ever!"RESET << std::endl;
	else
		std::cout << BLUE"FragTrap " << this->name << WHITE" cannot do an epic high five because they are gone!"RESET<< std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:02:08 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/18 17:39:08 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << GREEN"Default constructor called."RESET << std::endl;
	this->name = "";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string newName)
{
	std::cout << GREEN"Constructor with name called."RESET << std::endl;
	this->name = newName;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << GREEN"Copy constructor called."RESET << std::endl;
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << GREEN"Copy assignment operator called."RESET << std::endl;
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << GREEN"Default destructor called."RESET << std::endl;
}

void ClapTrap::Attack(const std::string& target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	else if (this->energyPoints > 0)
		std::cout << "ClapTrap " << this->name << " cannot attack " << target << " because they have " << this->hitPoints << " HP left." << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " cannot attack " << target << " because they have " << this->energyPoints << " EP left." << std::endl;
	if (this->hitPoints > 0 && this->energyPoints > 0)
		this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
		std::cout << "ClapTrap " << this->name << " takes " << amount << " damage to the face!" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " cannot take any damage because they are gone already." << std::endl;
	if (this->hitPoints > 0)
		this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
		std::cout << "Claptrap " << this->name << " restores " << amount << " HP!";
	else if (this->energyPoints > 0)
		std::cout << "ClapTrap " << this->name << " cannot restore any HP because they are gone already!" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " cannot restore any HP because they have " << this->energyPoints << " EP left!" << std::endl;
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->energyPoints--;
		this->hitPoints += amount;
		std::cout << " They now have " << this->hitPoints << " HP!" << std::endl;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:02:08 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/18 18:13:35 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << GREEN"Default constructor for " << this->name << " called."RESET << std::endl;
}

ClapTrap::ClapTrap(std::string newName)
{
	this->name = newName;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << GREEN"Constructor with name for " << this->name << " called."RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << GREEN"Copy constructor called."RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << GREEN"Copy assignment operator called."RESET << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << GREEN"Default destructor for " << this->name << " called."RESET << std::endl;
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

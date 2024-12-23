/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:02:08 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/23 15:02:58 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "Myxoceph";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << GREEN"ClapTrap Default constructor called."RESET << std::endl;
}

ClapTrap::ClapTrap(std::string newName)
{
	this->name = newName;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << GREEN"ClapTrap Constructor with name for "YELLOW << this->name << GREEN" called."RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << GREEN"ClapTrap Copy constructor called."RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << GREEN"ClapTrap Copy assignment operator called."RESET << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << GREEN"ClapTrap Default destructor for "YELLOW << this->name << GREEN" called."RESET << std::endl;
}

void ClapTrap::Attack(const std::string& target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
		std::cout << YELLOW"ClapTrap " << this->name << WHITE" attacks "RED << target << WHITE", causing " << this->attackDamage << " points of damage!"RESET << std::endl;
	else if (this->energyPoints > 0)
		std::cout << YELLOW"ClapTrap " << this->name << WHITE" cannot attack "RED << target << WHITE" because they have " << this->hitPoints << " HP left."RESET << std::endl;
	else
		std::cout << YELLOW"ClapTrap " << this->name << WHITE" cannot attack "RED << target << WHITE" because they have " << this->energyPoints << " EP left."RESET << std::endl;
	if (this->hitPoints > 0 && this->energyPoints > 0)
		this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
		std::cout << YELLOW"ClapTrap " << this->name << WHITE" takes " << amount << " damage to the face!"RESET << std::endl;
	else
		std::cout << YELLOW"ClapTrap " << this->name << WHITE" cannot take any damage because they are gone already."RESET << std::endl;
	if (this->hitPoints > 0)
		this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
		std::cout << YELLOW"ClapTrap " << this->name << WHITE" restores " << amount << " HP!"RESET;
	else if (this->energyPoints > 0)
		std::cout << YELLOW"ClapTrap " << this->name << WHITE" cannot restore any HP because they are gone already!"RESET << std::endl;
	else
		std::cout << YELLOW"ClapTrap " << this->name << WHITE" cannot restore any HP because they have " << this->energyPoints << " EP left!"RESET << std::endl;
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->energyPoints--;
		this->hitPoints += amount;
		std::cout << WHITE" They now have " << this->hitPoints << " HP!"RESET << std::endl;
	}
}

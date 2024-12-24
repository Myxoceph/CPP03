/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:02:08 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/24 20:44:24 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << GREEN"Default constructor called."RESET << std::endl;
	this->name = "Myxoceph";
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

void ClapTrap::showStats()
{
	std::cout << WHITE"=======================================" << std::endl;
	std::cout << YELLOW"ClapTrap " << this->name << "'s"WHITE << " stats are:"RESET << std::endl;
	std::cout << GREEN"Hit Points -> "WHITE << this->hitPoints << std::endl;
	std::cout << GREEN"Energy Points -> "WHITE << this->energyPoints << std::endl;
	std::cout << GREEN"Attack Damage -> "WHITE << this->attackDamage << std::endl;
	std::cout << WHITE"======================================="RESET << std::endl;
	
}

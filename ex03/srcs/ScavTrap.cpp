/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:46:24 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/24 20:44:24 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
	this->name = "Myxoceph";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << GREEN"ScavTrap Default constructor called."RESET << std::endl;
}

ScavTrap::ScavTrap(std::string newName) : ClapTrap(newName)
{
	this->name = newName;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << GREEN"ScavTrap Constructor with name for "CYAN << this->name << GREEN" called."RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << GREEN"Copy constructor called."RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << GREEN"Copy assignment operator called."RESET << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << GREEN"ScavTrap Default destructor for "CYAN << this->name << GREEN" called."RESET << std::endl;
}

void ScavTrap::Attack(const std::string& target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
		std::cout << CYAN"ScavTrap " << this->name << WHITE" attacks "RED << target << WHITE", causing " << this->attackDamage << " points of damage!"RESET << std::endl;
	else if (this->energyPoints > 0)
		std::cout << CYAN"ScavTrap " << this->name << WHITE" cannot attack "RED << target << WHITE" because they have " << this->hitPoints << " HP left."RESET << std::endl;
	else
		std::cout << CYAN"ScavTrap " << this->name << WHITE" cannot attack "RED << target << WHITE" because they have " << this->energyPoints << " EP left."RESET << std::endl;
	if (this->hitPoints > 0 && this->energyPoints > 0)
		this->energyPoints--;
}

void ScavTrap::guardGate()
{
	if (this->hitPoints > 0)
		std::cout << CYAN"ScavTrap " << this->name << WHITE" shouts: \"You shall not pass here!\""RESET << std::endl;
	else
		std::cout << CYAN"ScavTrap " << this->name << WHITE" cannot guard the gate because they are gone!"RESET << std::endl;
}

void ScavTrap::showStats()
{
	std::cout << WHITE"=======================================" << std::endl;
	std::cout << CYAN"ScavTrap " << this->name << "'s"WHITE << " stats are:"RESET << std::endl;
	std::cout << GREEN"Hit Points -> "WHITE << this->hitPoints << std::endl;
	std::cout << GREEN"Energy Points -> "WHITE << this->energyPoints << std::endl;
	std::cout << GREEN"Attack Damage -> "WHITE << this->attackDamage << std::endl;
	std::cout << WHITE"======================================="RESET << std::endl;
	
}

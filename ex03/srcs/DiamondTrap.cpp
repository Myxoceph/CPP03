/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 20:14:30 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/24 20:52:35 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Myxoceph")
{
	this->name = "Myxoceph";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << GREEN"DiamondTrap Default constructor called."RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string newName) : ClapTrap(newName + "_clap_name")
{
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << GREEN"DiamondTrap Constructor with name for "BLUE << this->name << GREEN" called."RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << GREEN"Copy constructor called."RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << GREEN"Copy assignment operator called."RESET << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << GREEN"DiamondTrap Default destructor for "BLUE << this->name << GREEN" called."RESET << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << WHITE"DiamondTrap's name is : "BLUE << this->name << std::endl;
	std::cout << WHITE"ClapTrap's name is : "YELLOW << ClapTrap::name << RESET"" <<std::endl;
}

void DiamondTrap::showStats()
{
	std::cout << WHITE"=======================================" << std::endl;
	std::cout << BLUE"DiamondTrap " << this->name << "'s"WHITE << " stats are:"RESET << std::endl;
	std::cout << GREEN"Hit Points -> "WHITE << this->hitPoints << std::endl;
	std::cout << GREEN"Energy Points -> "WHITE << this->energyPoints << std::endl;
	std::cout << GREEN"Attack Damage -> "WHITE << this->attackDamage << std::endl;
	std::cout << WHITE"======================================="RESET << std::endl;
	
}
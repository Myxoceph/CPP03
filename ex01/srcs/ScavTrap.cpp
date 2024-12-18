/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:46:24 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/18 18:13:40 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string newName) : ClapTrap(newName)
{
	this->name = newName;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << GREEN"Constructor with name for " << this->name << " called."RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << GREEN"Default destructor for " << this->name << " called."RESET << std::endl;
}

void ScavTrap::Attack(const std::string& target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	else if (this->energyPoints > 0)
		std::cout << "ScavTrap " << this->name << " cannot attack " << target << " because they have " << this->hitPoints << " HP left." << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " cannot attack " << target << " because they have " << this->energyPoints << " EP left." << std::endl;
	if (this->hitPoints > 0 && this->energyPoints > 0)
		this->energyPoints--;
}

void ScavTrap::guardGate()
{
	if (this->hitPoints > 0)
		std::cout << "ScavTrap " << this->name << " shouts: \"You shall not pass here!\"" << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " cannot guard the gate because they are gone!" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:46:26 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/25 16:04:08 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class ScavTrap : virtual public ClapTrap
{	
	public :
		ScavTrap();
		ScavTrap(std::string newName);
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &copy);
		~ScavTrap();
		void Attack(const std::string& target);
		int getEnergy();
		void guardGate();
		void showStats();
};

#endif

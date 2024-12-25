/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 15:20:00 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/25 14:23:08 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
	public :
		FragTrap();
		FragTrap(std::string newName);
		FragTrap(const FragTrap &copy);
		FragTrap &operator=(const FragTrap &copy);
		~FragTrap();
		void highFivesGuys(void);
		void showStats();
};


#endif

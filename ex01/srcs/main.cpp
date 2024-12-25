/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:02:15 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/25 14:16:10 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap Bob("Bob");
	
	std::cout << "--------------------------------------------" << std::endl;
	Bob.showStats();
	Bob.Attack("Test");
	Bob.takeDamage(50);
	Bob.beRepaired(40);
	Bob.guardGate();
	Bob.takeDamage(90);
	Bob.beRepaired(10);
	Bob.guardGate();
	Bob.showStats();
	std::cout << "--------------------------------------------" << std::endl;
}

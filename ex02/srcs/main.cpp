/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:02:15 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/23 15:48:39 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap Bob("Bob");
	// ScavTrap Jim("Jim");
	// ScavTrap Joe("Joe");
	
	std::cout << "--------------------------------------------" << std::endl;
	Bob.Attack("Test");
	Bob.takeDamage(50);
	Bob.beRepaired(40);
	Bob.highFivesGuys();
	Bob.takeDamage(90);
	Bob.beRepaired(10);
	Bob.highFivesGuys();
	std::cout << "--------------------------------------------" << std::endl;
	// std::cout << "--------------------------------------------" << std::endl;
	// std::cout << "\t\tHere comes Bob!" << std::endl;
	// Bob.Attack("a Monster");
	// Bob.takeDamage(3);
	// Bob.beRepaired(5);
	// std::cout << "--------------------------------------------" << std::endl;
	// std::cout << "\t\tHere comes Jim!" << std::endl;
	// Jim.Attack("a Monster");
	// Jim.takeDamage(15);
	// Jim.beRepaired(5);
	// Jim.Attack("a Monster");
	// std::cout << "--------------------------------------------" << std::endl;
	// std::cout << "\t\tHere comes Joe!" << std::endl;
	// Joe.beRepaired(1);
	// Joe.beRepaired(1);
	// Joe.beRepaired(1);
	// Joe.beRepaired(1);
	// Joe.beRepaired(1);
	// Joe.beRepaired(1);
	// Joe.beRepaired(1);
	// Joe.beRepaired(1);
	// Joe.beRepaired(1);
	// Joe.beRepaired(1);
	// Joe.Attack("a Dummy");
	// Joe.beRepaired(10);
	// std::cout << "--------------------------------------------" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:02:15 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/25 14:13:23 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Bob("Bob");
	ClapTrap Jim("Jim");
	ClapTrap Joe("Joe");
	
	// ClapTrap Bob("Bob");
	// ClapTrap Jim(Bob);
	// ClapTrap Joe;

	// Joe = Jim;
	
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << WHITE"\t\tHere comes Bob!"RESET << std::endl << std::endl;
	Bob.showStats();
	Bob.Attack("a Monster");
	Bob.takeDamage(3);
	Bob.beRepaired(5);
	Bob.showStats();
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << WHITE"\t\tHere comes Jim!"RESET << std::endl << std::endl;
	Jim.showStats();
	Jim.Attack("a Monster");
	Jim.takeDamage(15);
	Jim.beRepaired(5);
	Jim.Attack("a Monster");
	Jim.showStats();
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << WHITE"\t\tHere comes Joe!"RESET << std::endl << std::endl;
	Joe.showStats();
	Joe.beRepaired(1);
	Joe.beRepaired(1);
	Joe.beRepaired(1);
	Joe.beRepaired(1);
	Joe.beRepaired(1);
	Joe.beRepaired(1);
	Joe.beRepaired(1);
	Joe.beRepaired(1);
	Joe.beRepaired(1);
	Joe.beRepaired(1);
	Joe.Attack("a Dummy");
	Joe.beRepaired(10);
	Joe.showStats();
	std::cout << "--------------------------------------------" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:02:15 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/18 17:44:39 by abakirca         ###   ########.fr       */
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
	std::cout << "\t\tHere comes Bob!" << std::endl;
	Bob.Attack("a Monster");
	Bob.takeDamage(3);
	Bob.beRepaired(5);
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "\t\tHere comes Jim!" << std::endl;
	Jim.Attack("a Monster");
	Jim.takeDamage(15);
	Jim.beRepaired(5);
	Jim.Attack("a Monster");
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "\t\tHere comes Joe!" << std::endl;
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
	std::cout << "--------------------------------------------" << std::endl;
}

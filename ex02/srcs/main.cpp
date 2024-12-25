/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:02:15 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/25 14:22:43 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap Bob("Bob");
	
	std::cout << "--------------------------------------------" << std::endl;
	Bob.showStats();
	Bob.Attack("Test");
	Bob.takeDamage(50);
	Bob.beRepaired(40);
	Bob.highFivesGuys();
	Bob.takeDamage(90);
	Bob.beRepaired(10);
	Bob.highFivesGuys();
	Bob.showStats();
	std::cout << "--------------------------------------------" << std::endl;
}

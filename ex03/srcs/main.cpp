/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirca <abakirca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:02:15 by abakirca          #+#    #+#             */
/*   Updated: 2024/12/25 15:09:57 by abakirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("test");
	std::cout << std::endl;
	DiamondTrap b("Guts");
	std::cout << std::endl;
	std::cout << std::endl;
	a.showStats();
	std::cout << std::endl;
	a.whoAmI();
	std::cout << std::endl;
	a.Attack("a ferocious enemy");
	std::cout << std::endl;
	std::cout << std::endl;
	b.showStats();
	std::cout << std::endl;
	b.whoAmI();
	std::cout << std::endl;
	b.Attack("Griffith");
	std::cout << std::endl;
	std::cout << std::endl;
}

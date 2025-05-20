/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:05:24 by andefern          #+#    #+#             */
/*   Updated: 2025/05/14 10:56:35 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{

	ScavTrap Ambrosio("Ambrosio");

	std::cout << std::endl << "Stats:" << std::endl << "Attack Damage: " << Ambrosio.getAttackDamage() << std::endl << "Energy Points: " << Ambrosio.getEnergyPoints() << std::endl << "Hit Points: " << Ambrosio.getHitPoints() << std::endl << std::endl;

	Ambrosio.attack("Jacinto");
	Ambrosio.takeDamage(1);
	Ambrosio.beRepaired(5);
	Ambrosio.takeDamage(4);
	Ambrosio.guardGate();
	Ambrosio.takeDamage(0);
	Ambrosio.attack("Jacinto");
	Ambrosio.takeDamage(100);
	Ambrosio.attack("Jacinto");

	return (0);
}

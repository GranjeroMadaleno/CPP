/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 08:43:10 by andefern          #+#    #+#             */
/*   Updated: 2025/05/06 09:11:12 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{

	FragTrap Chindasvinto("Chindasvinto");

	std::cout << std::endl << "Stats:" << std::endl << "Attack Damage: " << Chindasvinto.getAttackDamage() << std::endl << "Energy Points: " << Chindasvinto.getEnergyPoints() << std::endl << "Hit Points: " << Chindasvinto.getHitPoints() << std::endl << std::endl;

	Chindasvinto.attack("Alarico");
	Chindasvinto.takeDamage(1);
	Chindasvinto.beRepaired(5);
	Chindasvinto.takeDamage(4);
	Chindasvinto.highFivesGuys();
	Chindasvinto.takeDamage(0);
	Chindasvinto.attack("Alarico");
	Chindasvinto.takeDamage(100);
	Chindasvinto.attack("Alarico");

	return (0);
}

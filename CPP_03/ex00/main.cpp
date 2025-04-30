/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 10:31:17 by andefern          #+#    #+#             */
/*   Updated: 2025/04/30 10:03:42 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
    ClapTrap Wenceslao("Wenceslao");

    std::cout << std::endl;

    std::cout << "Name: " << Wenceslao.getName() << std::endl;
    std::cout << "Hit Points: " << Wenceslao.getHitPoints() << std::endl;
    std::cout << "Energy points: " << Wenceslao.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << Wenceslao.getAttackDamage() << std::endl;
    std::cout << std::endl;

    Wenceslao.setAttackDamage(5);

    std::cout << std::endl;

    std::cout << "Name (Updated): " << Wenceslao.getName() << std::endl;
    std::cout << "Hit Points (Updated): " << Wenceslao.getHitPoints() << std::endl;
    std::cout << "Energy points (Updated): " << Wenceslao.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage (Updated): " << Wenceslao.getAttackDamage() << std::endl;
    std::cout << std::endl;

    Wenceslao.attack("Frumencio");
    std::cout << std::endl;
	
	ClapTrap Frumencio("Frumencio");
    std::cout << std::endl;
	
	Frumencio.takeDamage(5);
	Frumencio.beRepaired(5);
    std::cout << std::endl;
	
	return (0);
}
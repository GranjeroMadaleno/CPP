/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 10:31:17 by andefern          #+#    #+#             */
/*   Updated: 2025/04/26 14:26:16 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
    ClapTrap Wenceslao("Wenceslao");
    std::cout << std::endl;

    std::cout << "Nombre: " << Wenceslao.getName() << std::endl;
    std::cout << "Puntos de vida: " << Wenceslao.getHitPoints() << std::endl;
    std::cout << "Puntos de energía: " << Wenceslao.getEnergyPoints() << std::endl;
    std::cout << "Daño de ataque: " << Wenceslao.getAttackDamage() << std::endl;
    std::cout << std::endl;

    //Wenceslao.setAttackDamage(5);
    std::cout << std::endl;

    std::cout << "Nombre (después): " << Wenceslao.getName() << std::endl;
    std::cout << "Puntos de vida (después): " << Wenceslao.getHitPoints() << std::endl;
    std::cout << "Puntos de energía (después): " << Wenceslao.getEnergyPoints() << std::endl;
    std::cout << "Daño de ataque (después): " << Wenceslao.getAttackDamage() << std::endl;
    std::cout << std::endl;

    Wenceslao.attack("Frumencio");
	
/* 	ClapTrap Wenceslao("Wenceslao");
	

	Wenceslao.attack("Frumencio");
	Wenceslao.takeDamage(1);
	Wenceslao.beRepaired(3); */
	
/* 	ClapTrap Frumencio("Frumencio");
	
	Frumencio.attack("Wenceslao");
	Frumencio.takeDamage(2);
	Frumencio.beRepaired(5);*/
	
	return (0);
}
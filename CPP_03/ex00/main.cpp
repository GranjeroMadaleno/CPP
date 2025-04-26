/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 10:31:17 by andefern          #+#    #+#             */
/*   Updated: 2025/04/26 11:56:53 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{	
	ClapTrap Wenceslao("Wenceslao");
	
	Wenceslao.attack("Frumencio");
	Wenceslao.takeDamage(1);
	Wenceslao.beRepaired(3);
	Wenceslao.takeDamage(7);
	
/* 	ClapTrap Frumencio("Frumencio");
	
	Frumencio.attack("Wenceslao");
	Frumencio.takeDamage(2);
	Frumencio.beRepaired(5);
	Frumencio.takeDamage(9); */
	
	return (0);
}
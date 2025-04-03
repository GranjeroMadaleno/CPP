/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:09:24 by andefern          #+#    #+#             */
/*   Updated: 2025/04/03 13:48:18 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 5;

	Zombie *Horde = zombieHorde(N, "Órdago a la grande:\n");

	for (int i = 0; i < N; i++) {
		Horde[i].announce();
	}
	
	delete[] Horde;
    
	return (0);
}

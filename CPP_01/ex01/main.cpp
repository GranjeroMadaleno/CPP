/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:09:24 by andefern          #+#    #+#             */
/*   Updated: 2025/04/06 12:48:03 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 5;

	Zombie *Horde = zombieHorde(N, "Crowd:\n");

	for (int i = 0; i < N; i++) {
		Horde[i].announce();
	}
	
	delete[] Horde;
    
	return (0);
}

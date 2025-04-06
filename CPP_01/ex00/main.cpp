/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 13:09:57 by andefern          #+#    #+#             */
/*   Updated: 2025/04/06 13:03:20 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombiE;
	
	zombiE = newZombie("Belisario");
	zombiE->announce();
	
	randomChump("Dionisio");

	delete zombiE;
}

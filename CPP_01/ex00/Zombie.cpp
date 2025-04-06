/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 12:36:46 by andefern          #+#    #+#             */
/*   Updated: 2025/04/06 12:54:27 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	pname = name;
	std::cout << pname << " Am i dead or still alive?" << std::endl;
}

Zombie::~Zombie() {
	std::cout << pname << " Looks like more dead than alive" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << pname << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
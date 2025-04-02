/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 12:36:46 by andefern          #+#    #+#             */
/*   Updated: 2025/03/28 13:36:33 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	pname = name;
	std::cout << pname << " sa creao" << std::endl;
}

Zombie::~Zombie() {
	std::cout << pname << " las ha diñao" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << pname << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
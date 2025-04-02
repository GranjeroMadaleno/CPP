/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:09:26 by andefern          #+#    #+#             */
/*   Updated: 2025/03/28 15:11:22 by andefern         ###   ########.fr       */
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

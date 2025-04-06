/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:09:26 by andefern          #+#    #+#             */
/*   Updated: 2025/04/06 13:07:51 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie()
{
	std::cout << name << "Zombie decaying" << std::endl;
	std::cout << "-----RIP Humphrey-----" << std::endl;
}

Zombie::Zombie(std::string newname)
{
	name = newname;
}


void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setname(std::string newname)
{
	name = newname;
}

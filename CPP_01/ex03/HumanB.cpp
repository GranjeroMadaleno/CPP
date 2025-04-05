/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 17:59:42 by andefern          #+#    #+#             */
/*   Updated: 2025/04/05 19:20:10 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newname){
	name = newname;
}

void	HumanB::attack(){
	std::cout << name << " attacks with their " << weapon->gettype() << std::endl;
}

void	HumanB::setWeapon(class Weapon &newweapon){
	weapon = &newweapon;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 17:58:56 by andefern          #+#    #+#             */
/*   Updated: 2025/04/05 19:20:28 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newtype)
{
	type = newtype;
}

Weapon::~Weapon(){}

const std::string	&Weapon::gettype(void)
{
	return (type);
}

void	Weapon::setType(std::string new_type){
	type = new_type;
}

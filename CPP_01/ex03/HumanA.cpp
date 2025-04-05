/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:09:49 by andefern          #+#    #+#             */
/*   Updated: 2025/04/05 19:19:50 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string newname, Weapon &newweapon): name(newname), weapon(newweapon) {}

void HumanA::attack() {
	std::cout << name << " attacks with their " << weapon.gettype() << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 17:59:36 by andefern          #+#    #+#             */
/*   Updated: 2025/04/10 14:10:09 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanB
{

public:

	HumanB(std::string newname);
	void	setWeapon(Weapon &weapon);
	void	attack();

private:

	std::string name;
	Weapon *weapon;

};

#endif
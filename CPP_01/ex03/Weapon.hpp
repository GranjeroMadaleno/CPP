/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 17:58:54 by andefern          #+#    #+#             */
/*   Updated: 2025/04/05 19:20:32 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:

		std::string	type;
		
	public:
	
		Weapon(std::string type);
		~Weapon();

		const std::string &gettype();
		void setType(std::string newtype);

};

#endif
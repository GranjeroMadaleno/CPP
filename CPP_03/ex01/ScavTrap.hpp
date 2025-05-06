/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:06:56 by andefern          #+#    #+#             */
/*   Updated: 2025/05/02 12:48:44 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{

		private:

		public:
	
			ScavTrap();
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap &clone);
			ScavTrap &operator= (const ScavTrap &other);
			~ScavTrap();

			void attack(const std::string& target);
			void guardGate();
	
};


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 08:45:29 by andefern          #+#    #+#             */
/*   Updated: 2025/05/06 08:49:17 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{

		private:

		public:
	
			FragTrap();
			FragTrap(std::string name);
			FragTrap(const FragTrap &clone);
			FragTrap &operator= (const FragTrap &other);
			~FragTrap();

			void highFivesGuys(void);
	
};

#endif
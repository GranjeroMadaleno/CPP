/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 12:22:33 by andefern          #+#    #+#             */
/*   Updated: 2025/03/28 13:36:37 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
	
	private:
	
		std::string pname;

	public:
		Zombie(std::string name);
		~Zombie();

	void	announce(void);
};

Zombie*	newZombie(std::string name);
void randomChump(std::string name);

#endif

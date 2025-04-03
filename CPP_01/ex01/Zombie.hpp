/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 15:10:01 by andefern          #+#    #+#             */
/*   Updated: 2025/04/03 13:40:18 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	
	private:
	
		std::string name;

	public:

	Zombie();
	Zombie(std::string newname);
	~Zombie();

	void	setname(std::string name);
	void	announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif

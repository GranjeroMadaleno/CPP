/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 10:31:19 by andefern          #+#    #+#             */
/*   Updated: 2025/04/26 12:18:47 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
	
			std::string	pname;
			int			hitPoints;
			int			energyPoints;
			int			attackDamage;

	public:

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &clone);
	ClapTrap &operator= (const ClapTrap &other);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	const std::string& getName() const;
    int getHitPoints() const;
    int getEnergyPoints() const;
	//void ClapTrap::setAttackDamage(int amount);
    int getAttackDamage() const;
};

#endif
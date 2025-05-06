/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:05:21 by andefern          #+#    #+#             */
/*   Updated: 2025/05/02 13:14:22 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
	
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
    int getAttackDamage() const;
	
	void setAttackDamage(int newAttackDamage);
	void setName(std::string newName);
	void setEnergyPoints(int newEnergyPoints);
	void setHitPoints(int newHitPoints);
};

#endif
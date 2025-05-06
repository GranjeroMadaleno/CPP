/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 08:45:50 by andefern          #+#    #+#             */
/*   Updated: 2025/05/06 09:08:28 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	pname = name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;

	std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap()
{
	pname = "NoName";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;

	std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &clone) : ClapTrap(clone)
{
	*this = clone;
	std::cout << "FragTrap clone constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	ClapTrap::operator=(other);
	pname = other.pname;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	std::cout << "Clone assigment operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << getName() <<" High Fives and the one in the middle falls" << std::endl;
}

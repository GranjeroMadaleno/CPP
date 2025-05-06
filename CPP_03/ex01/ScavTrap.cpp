/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 10:06:59 by andefern          #+#    #+#             */
/*   Updated: 2025/05/06 08:40:19 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	pname = "NoName";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;

	std::cout << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	pname = name;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;

	std::cout << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &clone)
{
	*this = clone;
	std::cout << "Clone constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	pname = other.pname;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	std::cout << "Clone assigment operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called" << std::endl;
};

void ScavTrap::attack(const std::string& target)
{
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap " << pname << "has no energy points! " << std::endl;
		return ;
	}
	energyPoints--;
	
	std::cout << "ClapTrap " << pname << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() <<" Guard Gate mode on" << std::endl;
}
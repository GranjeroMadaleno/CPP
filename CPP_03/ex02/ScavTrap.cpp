/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 08:43:23 by andefern          #+#    #+#             */
/*   Updated: 2025/05/14 10:24:53 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	pname = "NoName";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;

	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	pname = name;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;

	std::cout << "ScavTrap default constructor called" << std::endl;
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
	std::cout << "ScavTrap destructor called" << std::endl;
};

void ScavTrap::attack(const std::string& target)
{
	if (energyPoints <= 0)
	{
		std::cout << "ScavTrap " << pname << "has no energy points! " << std::endl;
		return ;
	}
	energyPoints--;
	
	std::cout << "ScavTrap " << pname << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() <<" Guard Gate mode on" << std::endl;
}
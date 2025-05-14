/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 10:31:21 by andefern          #+#    #+#             */
/*   Updated: 2025/05/14 09:28:47 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	pname = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;

	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clone)
{
	*this = clone;
	std::cout << "Clone constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	pname = other.pname;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	std::cout << "Clone assigment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
};

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap " << pname << "has no energy points! " << std::endl;
		return ;
	}
	energyPoints--;
	
	std::cout << "ClapTrap " << pname << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= (unsigned int)hitPoints)
		hitPoints = 0;
	else
		hitPoints -= amount;
	
	std::cout << "ClapTrap " << pname << " received " << amount << " points of damage! Current hit points: " << hitPoints << std::endl;
	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap " << pname << " has no energy points! "  << std::endl;
		return ;
	}
	energyPoints--;
	hitPoints += amount;

	std::cout << "ClapTrap " << pname << " repaired itself for " << amount << " points! its actual health is " << hitPoints << std::endl;
}
const std::string& ClapTrap::getName() const
{
    return pname;
}

int ClapTrap::getHitPoints() const
{
    return hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
    return energyPoints;
}

void ClapTrap::setAttackDamage(int amount)
{
    attackDamage = amount;
    std::cout << pname << " sets its attack damage to " << attackDamage << std::endl;
}

int ClapTrap::getAttackDamage() const
{
    return attackDamage;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:34:25 by andefern          #+#    #+#             */
/*   Updated: 2025/05/20 09:20:12 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat default constructor called " << std::endl;
}

WrongCat::WrongCat(const WrongCat &clone) : WrongAnimal(clone)
{
	*this = clone;
	std::cout << "WrongCat clone constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	WrongAnimal::operator=(other);
	type = other.type;
	std::cout << "WrongCat clone operator constructor called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called " << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat says: ¡MI BOOMBOOO!" << std::endl;
}

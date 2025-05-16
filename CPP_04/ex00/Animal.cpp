/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:33:23 by andefern          #+#    #+#             */
/*   Updated: 2025/05/16 10:17:42 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal default constructor called " << std::endl;
}

Animal::Animal(const Animal &clone)
{
	*this = clone;
	std::cout << "Animal clone constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
	type = other.type;
	std::cout << "Animal clone operator constructor called" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal of type " << this->type << " default destructor called " << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "Animal says: ¡Linganguliguliguliguacha Lingangu Lingangu!" << std::endl;
}

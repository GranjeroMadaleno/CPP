/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:33:23 by andefern          #+#    #+#             */
/*   Updated: 2025/05/20 10:13:42 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	type = "AAnimal";
	std::cout << "AAnimal default constructor called " << std::endl;
}

AAnimal::AAnimal(const AAnimal &clone)
{
	*this = clone;
	std::cout << "AAnimal clone constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &other)
{
	type = other.type;
	std::cout << "AAnimal clone operator constructor called" << std::endl;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal of type " << this->type << " default destructor called " << std::endl;
}

std::string AAnimal::getType() const
{
	return (type);
}

void AAnimal::makeSound() const
{
	std::cout << "AAnimal says: ¡Linganguliguliguliguacha Lingangu Lingangu!" << std::endl;
}

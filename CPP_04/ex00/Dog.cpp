/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:33:11 by andefern          #+#    #+#             */
/*   Updated: 2025/05/29 10:53:56 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog default constructor called " << std::endl;
}

Dog::Dog(const Dog &clone) : Animal(clone)
{
	*this = clone;
	std::cout << "Dog clone constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	Animal::operator=(other);
	type = other.type;
	std::cout << "Dog clone operator constructor called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called " << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog says: ¡Dame Scooby Galletas!" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:33:11 by andefern          #+#    #+#             */
/*   Updated: 2025/05/29 11:07:22 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog default constructor called " << std::endl;
}

Dog::Dog(const Dog &clone) : AAnimal(clone)
{
	*this = clone;
	brain = new Brain(*clone.brain);
	std::cout << "Dog clone constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	AAnimal::operator=(other);
	type = other.type;
	brain = new Brain(*other.brain);
	std::cout << "Dog clone operator constructor called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called " << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "Dog says: ¡Dame Scooby Galletas!" << std::endl;
}

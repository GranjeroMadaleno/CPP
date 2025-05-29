/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:33:04 by andefern          #+#    #+#             */
/*   Updated: 2025/05/29 11:33:40 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat default constructor called " << std::endl;
}

Cat::Cat(const Cat &clone) : Animal(clone)
{
	*this = clone;
	brain = new Brain(*clone.brain);
	std::cout << "Cat clone constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	Animal::operator=(other);
	type = other.type;
	brain = new Brain(*other.brain);
	std::cout << "Cat clone operator constructor called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called " << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "Cat says: ¡Soy el **** Gazorpazorpfield, ****, y ahora dame mis ***** enchiladas!" << std::endl;
}

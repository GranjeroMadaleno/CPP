/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:33:04 by andefern          #+#    #+#             */
/*   Updated: 2025/05/29 10:53:47 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat default constructor called " << std::endl;
}

Cat::Cat(const Cat &clone) : Animal(clone)
{
	*this = clone;
	std::cout << "Cat clone constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	Animal::operator=(other);
	type = other.type;
	std::cout << "Cat clone operator constructor called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called " << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat says: ¡Soy el **** Gazorpazorpfield, ****, y ahora dame mis ***** enchiladas!" << std::endl;
}

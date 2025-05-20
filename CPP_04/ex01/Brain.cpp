/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 09:28:13 by andefern          #+#    #+#             */
/*   Updated: 2025/05/20 09:35:17 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called " << std::endl;
}

Brain::Brain(const Brain &clone)
{
	for (size_t i = 0; i < 100; i++)
		ideas[i] = clone.ideas[i];
	std::cout << "Brain clone constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &other)
{
	for (size_t i = 0; i < 100; i++)
		ideas[i] = other.ideas[i];
	std::cout << "Brain clone operator constructor called" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called " << std::endl;
}

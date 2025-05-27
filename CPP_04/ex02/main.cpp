/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:28:25 by andefern          #+#    #+#             */
/*   Updated: 2025/05/27 12:23:02 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

# define ARR_SIZE 10

int main()
{
	std::cout << "CONSTRUCTORS" << std::endl;
	const AAnimal		*animals[ARR_SIZE];

	for (size_t i = 0; i < ARR_SIZE; i++)
	{
		if (i % 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	std::cout << std::endl;
	
	std::cout << "TYPES" << std::endl;
	for (size_t i = 0; i < ARR_SIZE; i++)
		std::cout << animals[i]->getType() << " " << std::endl;
	std::cout << std::endl;

	std::cout << "SOUNDS" << std::endl;
	for (size_t i = 0; i < ARR_SIZE; i++)
		animals[i]->makeSound();
	std::cout << std::endl;

	std::cout << "DESTRUCTORS" << std::endl;
	for (size_t i = 0; i < ARR_SIZE; i++)
			delete animals[i];
    std::cout << std::endl;
    
	return (0);
}
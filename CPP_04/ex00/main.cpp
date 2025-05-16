/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:28:25 by andefern          #+#    #+#             */
/*   Updated: 2025/05/16 10:42:23 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* 		meta = new Animal();
	const Animal* 		cat = new Cat();
	const Animal* 		dog = new Dog();
	const WrongAnimal* 		wcat = new WrongCat();
	const WrongAnimal* 		wanimal = new WrongAnimal();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << wcat->getType() << " " << std::endl;
	std::cout << wanimal->getType() << " " << std::endl;

	meta->makeSound();
	cat->makeSound();
	dog->makeSound();
	wcat->makeSound();
	wanimal->makeSound();

	delete meta;
	delete cat;
	delete dog;
	
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:28:25 by andefern          #+#    #+#             */
/*   Updated: 2025/05/20 10:15:08 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    std::cout << "Making sounds:" << std::endl;
    j->makeSound();
    i->makeSound();

    delete j;
    delete i;

    const int amount = 4;
    AAnimal* animals[amount];
    for (int k = 0; k < amount; ++k) {
        if (k < amount / 2)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
    }

    std::cout << std::endl;
    for (int k = 0; k < amount; ++k) {
        animals[k]->makeSound();
    }
    std::cout << std::endl;

    for (int k = 0; k < amount; ++k) {
        delete animals[k];
    }

    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:33:17 by andefern          #+#    #+#             */
/*   Updated: 2025/05/29 10:54:39 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog: public Animal
{
	private:

	Brain	*brain;

	public:

		Dog();
		Dog(const Dog &clone);
		Dog &operator=(const Dog &other);
		~Dog();

		void makeSound() const;
};

#endif
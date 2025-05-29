/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:33:17 by andefern          #+#    #+#             */
/*   Updated: 2025/05/29 10:53:58 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog: public Animal
{
	private:

	public:

		Dog();
		Dog(const Dog &clone);
		Dog &operator=(const Dog &other);
		~Dog();

		void makeSound() const;
};

#endif
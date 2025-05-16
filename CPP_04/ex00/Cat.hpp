/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:33:02 by andefern          #+#    #+#             */
/*   Updated: 2025/05/16 10:07:18 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat: public Animal
{
	private:

	public:

		Cat();
		Cat(const Cat &clone);
		Cat &operator=(const Cat &other);
		~Cat();

		void makeSound() const;
};


#endif
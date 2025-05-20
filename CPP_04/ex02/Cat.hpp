/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:33:02 by andefern          #+#    #+#             */
/*   Updated: 2025/05/20 10:14:36 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat: public AAnimal
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
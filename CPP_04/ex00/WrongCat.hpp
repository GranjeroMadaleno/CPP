/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:34:22 by andefern          #+#    #+#             */
/*   Updated: 2025/05/16 10:40:49 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat: public WrongAnimal
{
	private:

	public:

		WrongCat();
		WrongCat(const WrongCat &clone);
		WrongCat &operator=(const WrongCat &other);
		~WrongCat();

		void makeSound() const;
};

#endif
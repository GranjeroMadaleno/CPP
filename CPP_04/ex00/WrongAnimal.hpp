/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:33:53 by andefern          #+#    #+#             */
/*   Updated: 2025/05/16 10:40:03 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:

		std::string type;

	public:

		WrongAnimal();
		WrongAnimal(const WrongAnimal &clone);
		WrongAnimal &operator=(const WrongAnimal &other);
		~WrongAnimal();

		void makeSound() const;
		std::string getType() const;
};


#endif

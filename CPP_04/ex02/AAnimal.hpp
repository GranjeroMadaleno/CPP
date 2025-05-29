/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:33:31 by andefern          #+#    #+#             */
/*   Updated: 2025/05/29 11:39:07 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:

		std::string type;

	public:

		AAnimal();
		AAnimal(const AAnimal &clone);
		AAnimal &operator=(const AAnimal &other);
		virtual ~AAnimal();

		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif
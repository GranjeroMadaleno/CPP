/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 09:28:09 by andefern          #+#    #+#             */
/*   Updated: 2025/05/27 11:58:04 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"
#include <iostream>

class Brain
{
	private:

		std::string	ideas[100];

	public:

		Brain();
		Brain(const Brain &clone);
		Brain &operator=(const Brain &other);
		~Brain();

		std::string	get_idea(int n);
};

#endif
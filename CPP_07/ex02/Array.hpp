/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:11:55 by andefern          #+#    #+#             */
/*   Updated: 2025/08/05 11:12:07 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class	Array
{
private:
	T				*_data;
	unsigned int	_size; 

public:

/*--------------------CONSTRUCTORS-------------------*/
	Array();
	Array(unsigned int n);
	Array(const Array &model);
	Array &operator=(const Array &model);
	T	&operator[](unsigned int idx);
	T	&operator*();

/*--------------------DESTRUCTORS--------------------*/

	~Array();

/*-----------------PUBLIC_FUNCTIONS------------------*/

	unsigned int	size(void) const;
};

#include "Array.tpp"

#endif
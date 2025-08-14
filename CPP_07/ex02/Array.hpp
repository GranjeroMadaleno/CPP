/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:11:55 by andefern          #+#    #+#             */
/*   Updated: 2025/08/14 13:06:56 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		Array &operator= (const Array &model);
		~Array();

		unsigned int	size() const;
		T&				operator [] (unsigned int n);
		const T&		operator [] (unsigned int n) const;
};

#include "Array.tpp"

#endif

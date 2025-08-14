/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:11:57 by andefern          #+#    #+#             */
/*   Updated: 2025/08/14 13:07:49 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(): _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n): _array(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(const Array& other): _array(NULL), _size(0) {*this = other;}

template <typename T>
Array<T>::~Array() {delete[] _array;}

template <typename T>
unsigned int	Array<T>::size() const {return (_size);}

template <typename T>
T&		Array<T>::operator [] (unsigned int n) {
	if (n >= _size)
		throw std::out_of_range("Invalid index, out of range");
	return (_array[n]);
}

template <typename T>
const T&	Array<T>::operator [] (unsigned int n) const {
	if (n >= _size)
		throw std::out_of_range("Invalid index, out of range");
	return (_array[n]);
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &model) {
	if (this == model)
		return (*this);
	delete[] _array;
	_size = model->_size;
	this->_array = new T[_size];
	for (unsigned int i = 0; i < _size; i ++)
		this->_array[i] = model._array[i];
}


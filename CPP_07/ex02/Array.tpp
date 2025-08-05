/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:11:57 by andefern          #+#    #+#             */
/*   Updated: 2025/08/05 11:21:35 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/*							CONSTRUCTORS						*/

template <typename T>
Array<T>::Array() {
	_size = 0;
	_data = new T[_size];
}

template <typename T>
Array<T>::Array(unsigned int n) {
	_size = n;
	_data = new T[_size];
}

template <typename T>
Array<T>::Array(const Array &model) {
	_size = model._size;
	_data = new T[_size];
	for (size_t i = 0; i < _size; i++)
		_data[i] = model._data[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &model) {
	_size = model._size;
	_data = new T[_size];
	for (size_t i = 0; i < _size; i++)
		_data[i] = model._data[i];
	return (*this);
}

/*							DESTRUCTORS							*/

template <typename T>
Array<T>::~Array() {
	delete[] _data;
}

/*						PUBLIC_FUNCTIONS						*/

template <typename T>
T	&Array<T>::operator[](unsigned int idx){
	if (idx >= _size)
		throw std::out_of_range("Uvuvwevwevwe Onyetenyevwe Ugwemuhwem Osas");
	return (_data[idx]);
}

template <typename T>
T	&Array<T>::operator*(){
	return (*_data);
}

template <typename T>
unsigned int	Array<T>::size(void) const{
	return(_size);
}
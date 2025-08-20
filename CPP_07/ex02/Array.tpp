/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:11:57 by andefern          #+#    #+#             */
/*   Updated: 2025/08/20 12:39:26 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


 #include "Array.hpp"
 #include <iostream>
 #include <stdexcept>
 
 template <typename T>
 Array<T>::Array(): _array(NULL), _size(0) {
	 std::cout << "Default ccnstructor (Empty array) called" << std::endl;
 }
 
 template <typename T>
 Array<T>::Array(unsigned int n): _array(NULL), _size(n) {
	 std::cout << "Constructor with size of (" << n << ") called" << std::endl;
	 if (_size > 0) {
		 _array = new T[_size]();
	 }
 }
 
 template <typename T>
 Array<T>::Array(const Array &copy): _array(NULL), _size(0) {
	 std::cout << "Copy constructor called" << std::endl;
	 *this = copy;
 }
 
 template <typename T>
 Array<T>::~Array() {
	 std::cout << "Destructor called. Freeing memory" << std::endl;
	 delete[] _array;
	 _array = NULL;
 }
 
 template <typename T>
 unsigned int    Array<T>::size() const {
	 return (_size);
 }
 
 template <typename T>
 T&      Array<T>::operator [] (unsigned int n) {
	 if (n >= _size)
		 throw std::out_of_range("Index out of range");
	 return (_array[n]);
 }
 
 template <typename T>
 const T&    Array<T>::operator [] (unsigned int n) const {
	 if (n >= _size)
		 throw std::out_of_range("Index out of range");
	 return (_array[n]);
 }
 
 template <typename T>
 Array<T>    &Array<T>::operator=(const Array<T> &model) {
	 std::cout << "Assignment operator called" << std::endl;
	 if (this == &model)
		 return (*this);
	 delete[] _array;
	 _size = model._size;
	 this->_array = new T[_size];
	 for (unsigned int i = 0; i < _size; i ++)
		 this->_array[i] = model._array[i];
	 return (*this);
 }
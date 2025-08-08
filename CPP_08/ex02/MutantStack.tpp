/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:23:21 by andefern          #+#    #+#             */
/*   Updated: 2025/08/05 13:25:25 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& other): std::stack<T>(other) {}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator = (const MutantStack& other)
{
	if (this != &other)
		std::stack<T>::operator = (other);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {return this->c.begin();}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {return this->c.end();}

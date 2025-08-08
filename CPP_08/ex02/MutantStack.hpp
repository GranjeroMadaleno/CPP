/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:23:35 by andefern          #+#    #+#             */
/*   Updated: 2025/08/05 13:28:40 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack();
	MutantStack(unsigned int n);
	MutantStack(const MutantStack &copy);
	MutantStack &operator= (const MutantStack &model);
	~MutantStack();

	typedef typename std::deque<T>::iterator	iterator;
	iterator begin();
	iterator end();
};

#include "MutantStack.tpp"

#endif
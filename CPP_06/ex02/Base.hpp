/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 12:28:56 by andefern          #+#    #+#             */
/*   Updated: 2025/08/04 12:31:44 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
public:
	virtual ~Base();
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif
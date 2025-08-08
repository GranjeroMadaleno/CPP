/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 12:50:39 by andefern          #+#    #+#             */
/*   Updated: 2025/08/08 12:51:01 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
	private:
		std::stack<int> _stack;
		
	public:
		RPN();
		RPN(const RPN& other);
		~RPN();

		void add(char input);

		int getRes();

		RPN&	operator = (const RPN& other);
};


#endif
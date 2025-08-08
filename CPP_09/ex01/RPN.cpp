/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 12:50:32 by andefern          #+#    #+#             */
/*   Updated: 2025/08/08 12:57:28 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &other) : _stack(other._stack) {}

RPN &RPN::operator=(const RPN &other)
{
	if (this != &other)
		_stack = other._stack;
	return (*this);
}

RPN::~RPN() {}

void RPN::add(char input)
{
	int n1, n2;

	if (isspace(input))
		return;
	if (isdigit(input))
		return _stack.push(input - '0');

	if (_stack.size() < 2)
		throw std::runtime_error("Error");

	n1 = _stack.top();
	_stack.pop();
	n2 = _stack.top();
	_stack.pop();

	switch (input)
	{
	case '+':
		return (_stack.push(n2 + n1));
		break;
	case '-':
		return (_stack.push(n2 - n1));
		break;
	case '*':
		return (_stack.push(n2 * n1));
		break;
	case '/':
		if (n1 == 0)
			throw std::runtime_error("Error: Trying to divide by 0");
		return (_stack.push(n2 / n1));
		break;
	default:
		throw std::runtime_error("Error: Invalid character");
		break;
	}
}

int RPN::getRes()
{
	if (_stack.size() != 1)
		throw std::runtime_error("Error: Empty stack");
	return (_stack.top());
}
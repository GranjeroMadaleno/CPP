/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:51:57 by andefern          #+#    #+#             */
/*   Updated: 2025/08/05 13:05:15 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : n(42) {}
Span::Span(unsigned int n) : n(n) { array.reserve(n);};
Span::Span(const Span &copy) : array(copy.array), n(copy.n) {}
Span &Span::operator=(const Span &model)
{
	if (this != &model)
	{
		array = model.array;
		n = model.n;
	}
	return *this;
}
Span::~Span() {};

void Span::addNumber(int nbr)
{
	if (array.size() >= n)
		throw std::runtime_error("Span is already full.");
	array.push_back(nbr);
}

unsigned int Span::shortestSpan()
{
	unsigned int smallest;

	if (array.size() < 2)
		throw std::runtime_error("Not enough numbers");
	std::vector<int> sorted(array);
	std::sort(sorted.begin(), sorted.end());
	smallest = std::abs(sorted[1] - sorted[0]);
	for (size_t i = 1; i < sorted.size() - 1; i++)
	{
		unsigned int diff = std::abs(sorted[i + 1] - sorted[i]);
		if (diff < smallest)
			smallest = diff;
	}
	return smallest;
}

unsigned int Span::longestSpan()
{
	if (array.size() < 2)
		throw std::runtime_error("Not enough numbers");
	int min = *std::min_element(array.begin(), array.end());
	int max = *std::max_element(array.begin(), array.end());
	return max - min;
}
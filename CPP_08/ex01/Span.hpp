/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:52:05 by andefern          #+#    #+#             */
/*   Updated: 2025/08/05 12:56:06 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>
#include <algorithm>

class Span
{
private:
	std::vector<int>	array;
	unsigned int		n;

public:
	Span();
	Span(unsigned int n);
	Span(const Span &copy);
	Span &operator= (const Span &model);
	~Span();

	void			addNumber(int nbr);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
	
};

#endif
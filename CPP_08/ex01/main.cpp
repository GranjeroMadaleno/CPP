/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:51:51 by andefern          #+#    #+#             */
/*   Updated: 2025/08/05 13:06:11 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	try
	{
		Span	sp = Span(10000);
		int		n;

		srand(time(NULL));
		for (int i = 0; i < 10000; i++)
		{
			n = rand() % 100000;
			std::cout << n << ", ";
			sp.addNumber(n);
		}
		
		std::cout << std::endl;

		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}
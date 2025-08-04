/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:35:39 by andefern          #+#    #+#             */
/*   Updated: 2025/08/04 11:17:27 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "Bureaucrat.hpp"

#define HRED	"\033[91m"
#define HBLU	"\033[94m"
#define HGRE	"\033[92m"
#define HMAG	"\033[95m"
#define RST		"\033[0m"

int main()
{
	Bureaucrat juian("juian", 99);
	std::cout << HGRE << juian << RST << std::endl;
	Bureaucrat ernesto("ernesto", 20);
	Bureaucrat yisus;

	try
	{
		ernesto = Bureaucrat("ernesto", 500);
		Bureaucrat federico("ernesto", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << HRED << e.what() << RST << std::endl;
	}
	std::cout << HBLU << ernesto << RST << std::endl;
	std::cout << HMAG << yisus << RST << std::endl;
	return (0);
};
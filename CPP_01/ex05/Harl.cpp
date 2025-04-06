/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 11:13:28 by andefern          #+#    #+#             */
/*   Updated: 2025/04/06 11:43:06 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::debug( void )
{
	std::cout << "Debug? Why? For what?" << std::endl;
}

void Harl::info( void )
{
	std::cout << "If you want some info open Wikipedia ffs, dont ask me." << std::endl;
}

void Harl::warning( void )
{
	std::cout << "Listen to me, i dont know what you have done but i have a Warning light here shining like the sun." << std::endl;
}

void Harl::error( void )
{
	std::cout << "Error 666: You have just summoned the Devil." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*functions[4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			return;
		}
	}

	std::cout << "I need a valid input." << std::endl;
}

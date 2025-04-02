/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:49:38 by andefern          #+#    #+#             */
/*   Updated: 2025/03/22 16:53:54 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->total_c = 0;
}

PhoneBook::~PhoneBook() {}

void	PhoneBook::add() {
	Contact	contact;
	
	contact.set_contact();
	this->contacts[total_c % 8] = contact;
	this->total_c++;
}

void	bars(std::string str)
{
	if (str.length() > 10)
		std::cout << "|" << str.substr(0, 9) << ".";
	else 
		std::cout << "|" << std::setw(10) << std::right << str;
}

void	PhoneBook::search() {

	std::string	prompt;

	if (total_c == 0)
	{
		std::cout << "Please create a contact at first" << std::endl;
		return ;
	}
	std::cout << "|INDEX     |FIRST_NAME|SECOND_NA.|NICK_NAME |" << std::endl;
	std::cout << "=============================================" << std::endl;

	for (int i = 0; i < total_c && i < 8; i++)
	{
		std::string number(1, i + '0');
		bars(number);
		bars(contacts[i].get_first_name());
		bars(contacts[i].get_last_name());
		bars(contacts[i].get_nickname());
		std::cout << "|" << std::endl;
	}
	std::cout << "=============================================" << std::endl;
	std::cout << "SELECT A CONTACT" << std::endl;
	std::cout << "PLEASE INSERT A VALID INDEX:" << std::endl;

	while (1)
	{
		std::getline(std::cin, prompt);
		for (int i = 0; i < total_c; i++)
		{
			if (prompt.length() == 1 && prompt[0] - '0' == i)
			{
				std::cout << "FIRST NAME: " << contacts[i].get_first_name() << std::endl;
				std::cout << "SECOND NAME: " << contacts[i].get_last_name() << std::endl;
				std::cout << "NICK NAME: " << contacts[i].get_nickname() << std::endl;
				std::cout << "PHONE NUMBER: " << contacts[i].get_phone_number() << std::endl;
				std::cout << "DARKEST SECRET: " << contacts[i].get_darkest_secret() << std::endl;
				return ;
			}
		}
		std::cout << "Please insert a valid index" << std::endl;
	}
}

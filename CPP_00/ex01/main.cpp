/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:28:19 by andefern          #+#    #+#             */
/*   Updated: 2025/03/22 16:08:27 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.hpp"

int	main(void)
{
	PhoneBook		phonebook;
	std::string		str;

	while (str.compare("EXIT") != 0)
	{
		str = get_info("Please enter a valid input: ");
		if (!str.compare("ADD"))
			phonebook.add();
		else if (!str.compare("SEARCH"))
			phonebook.search();
		else if(str.compare("EXIT") != 0)
			std::cout << "Invalid input, try ADD, SEARCH or EXIT" << std::endl;
	}
	return 0;
}

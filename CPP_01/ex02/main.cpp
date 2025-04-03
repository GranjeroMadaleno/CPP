/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:53:55 by andefern          #+#    #+#             */
/*   Updated: 2025/04/03 14:02:18 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPtr = &string;
	std::string &stringRef = string;
	
	std::cout << "---ADDRESS---" << std::endl;

	std::cout << "String: " << &string << std::endl;
	std::cout << "Pointer: " << stringPtr << std::endl;
	std::cout << "Reference: " << &stringRef<< std::endl;

	std::cout << "---CONTENT---" << std::endl;

	std::cout << "String: " << string << std::endl;
	std::cout << "Pointer: " << *stringPtr << std::endl;
	std::cout << "Reference: " << stringRef<< std::endl;
	
	return (0);
}

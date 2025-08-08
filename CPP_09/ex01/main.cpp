/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 12:49:46 by andefern          #+#    #+#             */
/*   Updated: 2025/08/08 13:02:34 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cerr << "Error: Invalid arguments" << std::endl, 1);

	RPN rpn;

	try
	{
		for (int i = 0; argv[1][i]; i++)
			rpn.add(argv[1][i]);
		std::cout << rpn.getRes() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}

//./Serialization "3 4 +"
//./Serialization "5 1 2 + 4 * +"
//./Serialization "5 0 /"
//./Serialization "10 5 / 2 *"
//./Serialization "1 2 a +"
//./Serialization

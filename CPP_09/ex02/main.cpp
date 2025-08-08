/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:01:58 by andefern          #+#    #+#             */
/*   Updated: 2025/08/08 13:17:43 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 3)
		return (std::cerr << "Insert arguments please!" << std::endl, 1);
	PmergeMe merge;
	try
	{
		merge.sort(argc, argv);
	}
	catch (const std::exception &e) {std::cerr << e.what() << '\n';}

	return 0;
}

//./Identify_real_type 3 5 9 1 7 4 6 2
//./Identify_real_type 5 2 8 2 1 8 5
//./Identify_real_type 10 20 5 15
//./Identify_real_type 1 2 a 3
//./Identify_real_type 1 2 -5 3
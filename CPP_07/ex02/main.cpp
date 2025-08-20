/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 12:50:52 by andefern          #+#    #+#             */
/*   Updated: 2025/08/20 12:43:28 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>

int	main(void) {
	Array<std::string> array(2);
	array[0] = "Mamañema";
	array[1] = "Salakatunga";	
	try {
		std::cout << array[0] << std::endl;
		std::cout << array[1] << std::endl;
		array[2] = "Merequetengue";
		std::cout << array[2] << std::endl;
	}
	catch	(std::out_of_range	&e) {
		std ::cout << e.what() << std::endl;
	}
	return (0);
}


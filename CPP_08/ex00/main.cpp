/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:24:43 by andefern          #+#    #+#             */
/*   Updated: 2025/08/05 12:50:42 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void) {
	std::vector<int> vec;

	vec.push_back(7);
	vec.push_back(11);
	vec.push_back(25);
	vec.push_back(33);
	if(easyfind(vec, 25))
		std::cout << "Number Found" << std::endl;
	else
		std::cout << "Number Not Found" << std::endl;
}
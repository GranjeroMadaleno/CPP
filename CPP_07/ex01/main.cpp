/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:07:42 by andefern          #+#    #+#             */
/*   Updated: 2025/08/14 12:39:00 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void) {
	int intArray[] = {1, 2, 3, 99, 48};
	char charArray[] = {'a', 'B', '4', 'd', 'E', '-', 33};
	
	iter(intArray, 5, print_value);
	iter(charArray, 7, print_value);
}
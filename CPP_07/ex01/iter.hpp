/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 11:08:04 by andefern          #+#    #+#             */
/*   Updated: 2025/08/20 12:28:25 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>


template <typename T>
void iter(T array[], size_t length, void (*function)(T const &)) {
    for (size_t i = 0; i < length; i++)
        function(array[i]);
}

template <typename T, typename F>
void iter(T array[], size_t length, F function) {
    for (size_t i = 0; i < length; i++)
        function(array[i]);
}

template <typename T>
void print_value(const T& x) {
    std::cout << x << std::endl;
}

#endif

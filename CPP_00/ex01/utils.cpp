/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 10:41:20 by andefern          #+#    #+#             */
/*   Updated: 2025/03/22 16:51:49 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string	get_info(const std::string prompt) {
	
    std::string result;

    while (1) {

        if (!prompt.empty()) {
            std::cout << prompt;
        }

        std::getline(std::cin, result);

        if (std::cin.eof()) {
            std::cerr << "EOF(End Of File) read error" << std::endl;
            exit(1);
        }

        for (std::string::iterator it = result.begin(); it != result.end(); it++)
        {
            if (static_cast<unsigned char>(*it) == 0xC3)
            {
                std::cout << "Out of unicode character not allowed. " << std::endl;
                result = "";
                break;
            }
        }

        if (!result.empty()) {
            return result;
        }

        std::cout << "Invalid input, try again" << std::endl;
    }
}
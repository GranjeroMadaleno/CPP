/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 12:44:38 by andefern          #+#    #+#             */
/*   Updated: 2025/08/08 13:30:43 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <map>
#include <fstream>
#include <iomanip>
#include <limits>
#include <ctime>

class BitcoinExchange
{
private:
	BitcoinExchange();
	std::map<std::string, float> _map;
public:
	BitcoinExchange(std::string file);
	BitcoinExchange(const BitcoinExchange &copy);
	BitcoinExchange &operator= (const BitcoinExchange &model);
	~BitcoinExchange();

	void printValue(std::ifstream &file);
};

#endif
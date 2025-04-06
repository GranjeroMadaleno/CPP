/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 11:13:24 by andefern          #+#    #+#             */
/*   Updated: 2025/04/06 11:36:44 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl 
{
	private:
	
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		
    public:
	
		Harl();
		~Harl();

        void complain(std::string level);
        
};

#endif
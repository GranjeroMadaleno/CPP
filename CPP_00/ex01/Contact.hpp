/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:49:32 by andefern          #+#    #+#             */
/*   Updated: 2025/03/22 10:22:16 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iomanip>
#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>

class Contact {

	private:
			std::string	first_name;
			std::string	last_name;
			std::string	nickname;
			std::string	phone_number;
			std::string	darkest_secret;

	public:
			Contact(void);
			~Contact(void);

			void		set_contact(void);
			std::string	get_first_name(void);
			std::string	get_last_name(void);
			std::string	get_nickname(void);
			std::string	get_phone_number(void);
			std::string	get_darkest_secret(void);
};

#endif
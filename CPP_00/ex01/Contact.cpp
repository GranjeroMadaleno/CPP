/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:49:29 by andefern          #+#    #+#             */
/*   Updated: 2025/03/22 15:30:28 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "utils.hpp"

Contact::Contact(void) {}

void	Contact::set_contact(void) {
	this->first_name = get_info("First name: ");
	this->last_name = get_info("Last name: ");
	this->nickname = get_info("Nickname: ");
	this->phone_number = get_info("Phone number: ");
	this->darkest_secret = get_info("Darkest secret: ");
	std::cout << "Contact added!" << std::endl;
}

Contact::~Contact(void){}

std::string	Contact::get_first_name(void){
	return (first_name);
}

std::string	Contact::get_last_name(void){
	return (last_name);
}

std::string	Contact::get_nickname(void){
	return (nickname);
}

std::string	Contact::get_phone_number(void){
	return (phone_number);
}

std::string	Contact::get_darkest_secret(void){
	return (darkest_secret);
}
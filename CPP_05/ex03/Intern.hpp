/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:24:15 by andefern          #+#    #+#             */
/*   Updated: 2025/08/04 11:27:46 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &model);
	Intern	&operator=(const Intern &model);
	~Intern();

	AForm*	makeForm(std::string form, std::string target);
};

#endif
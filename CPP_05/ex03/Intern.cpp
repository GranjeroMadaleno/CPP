/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:24:02 by andefern          #+#    #+#             */
/*   Updated: 2025/08/04 11:27:52 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

Intern::Intern(void){};

Intern::Intern(const Intern &model) {
	(void)model;
}

Intern	&Intern::operator=(const Intern &model) {
	(void)model;
	return *this;
}

Intern::~Intern() {}

AForm*	Intern::makeForm(std::string form, std::string target) {
	int	i = 0;
	std::string forms[4] = {"presidential", "robotomy", "shrubbery"};

	while (i < 3 && forms[i] != form)
		i++;
	if (i >= 3)
	{
		std::cout << "Error: Unknown form type '" << form << "'" << std::endl;
		return NULL;
	}
	else
		std::cout << "Intern creates " << form << std::endl;
		
	switch (i)
	{
	case 0:
		return new PresidentialPardonForm(target);
		break;
	case 1:
		return new RobotomyRequestForm(target);
		break;
	case 2:
		return new ShrubberyCreationForm(target);
		break;
	default:
		break;
	}
	return NULL;
}
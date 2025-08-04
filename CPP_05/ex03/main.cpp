/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:35:11 by andefern          #+#    #+#             */
/*   Updated: 2025/08/04 11:44:36 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	try {
		Intern Pancracio;
		AForm *shrubbery;
		AForm *robotomy;
		AForm *presidential;
		Bureaucrat Felipe("Bureaucrat", 10);

		shrubbery = Pancracio.makeForm("shrubbery", "Home");
		robotomy = Pancracio.makeForm("robotomy", "Bender");

		presidential = Pancracio.makeForm("tax evasion", "Someone");
		presidential = Pancracio.makeForm("presidential", "Someone");

		Felipe.signForm(*shrubbery);
		Felipe.signForm(*robotomy);
		Felipe.signForm(*presidential);
		Felipe.executeForm(*shrubbery);
		Felipe.executeForm(*robotomy);
		Felipe.executeForm(*presidential);

		delete shrubbery;
		delete robotomy;
		delete presidential;
	}
	catch (std::exception &_exception) {
		std::cout << _exception.what() << std::endl;
	}
	return (0);
}
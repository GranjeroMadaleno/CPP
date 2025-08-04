/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:09:52 by andefern          #+#    #+#             */
/*   Updated: 2025/08/04 11:11:40 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45) {
	target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
: AForm("RobotomyRequestForm", 72, 45)
{
	this->target = copy.target;
}

RobotomyRequestForm   &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	if (this != &other)
		this->target = other.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string	RobotomyRequestForm::getTarget() const {
	return(target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	this->checkExec(executor);
	std::cout << "Making some drilling noises...\n";
	srand(time(0));
	if (std::rand() % 2 == 0)
		std::cout << target << " has been robotomized successfully!\n";
	else
		std::cout << "Robotomy failed for " << target << "\n";
}
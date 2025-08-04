/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:35:33 by andefern          #+#    #+#             */
/*   Updated: 2025/07/14 12:49:22 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : pname("Default pname"), pgrade(150)
{
	//std::cout << "Bureaucrat constructor called" << std::endl;
};

Bureaucrat::Bureaucrat(std::string name, unsigned int grade): pname(name), pgrade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();

	//std::cout << "Constructor bureaucrat: " << this->pname << " with grade: " << this->pgrade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &clone)
{
	*this = clone;
	//std::cout << "Bureaucrat clone constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	this->pgrade = other.pgrade;
	return (*this);
	//std::cout << "Bureaucrat operation constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(){
	//std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
	return (this->pname);
}

unsigned int Bureaucrat::getGrade() const
{
	return (this->pgrade);
}
void	Bureaucrat::gradeIncrement()
{
	if ((this->getGrade() - 1) < 1)
		throw GradeTooHighException();
	this->pgrade--;
}
void	Bureaucrat::gradeDecrement()
{
	if ((this->getGrade() + 1) > 150)
		throw GradeTooLowException();
	this->pgrade++;
}

std::ostream	&operator<<(std::ostream &_ostream, const Bureaucrat &bureaucrat) {
	_ostream << "Bureaucrat: " << bureaucrat.getName() << ", Bureaucrat grade: " << bureaucrat.getGrade();
	return (_ostream);
}

void	Bureaucrat::signForm(Form &form) const {
	try {
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << this->getName() << " can't sign form " << form.getName(); 
		std::cout << " because it's beyond it's jurisdiction (rank difference = ";
		std::cout << this->getGrade() - form.getSignGrade() << ")" << std::endl;
	}
}
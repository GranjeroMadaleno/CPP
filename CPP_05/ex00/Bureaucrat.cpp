/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:37:06 by andefern          #+#    #+#             */
/*   Updated: 2025/08/04 11:15:43 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Default"), grade(150) {};

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : name(name), grade(grade) {
	if (grade > 150)
		throw GradeTooHighException();
	if (grade < 1)
		throw GradeTooLowException();
	this->grade = grade;
};

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name){
	grade = copy.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other) {
	grade = other.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

std::string	Bureaucrat::getName(void) const{
	return this->name;
}

unsigned int	Bureaucrat::getGrade(void) const {
	return this->grade;
}

void	Bureaucrat::incrementGrade(void) {
	this->grade++;
	if (grade > 150)
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade(void) {
	this->grade--;
	if (grade < 1)
		throw GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &ostream, const Bureaucrat &model) {
	ostream << model.getName() << ", bureaucrat grade " << model.getGrade();
	return(ostream);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low";
}
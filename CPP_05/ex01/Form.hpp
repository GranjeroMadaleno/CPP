/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 10:30:51 by andefern          #+#    #+#             */
/*   Updated: 2025/08/06 12:35:46 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <stdexcept>
#include <iostream>

class Bureaucrat;

class Form
{
private:
	const 						std::string	name;
	bool						isSigned;
	const unsigned int			signGrade;
	const unsigned int			executeGrade;

public:
	Form();
	Form(std::string name, int signGrade, int executeGrade);
	Form(const Form &copy);
	Form &operator= (const Form &other);
	~Form();

	std::string	getName(void) const;
	bool		getSigned(void) const;
	int			getSignGrade(void) const;
	int			getExecuteGrade(void) const;

	void		beSigned(const Bureaucrat &bureaucrat);

	class	GradeTooHighException: public std::exception {
		public:
			const char *what() const throw();
	};
	class	GradeTooLowException: public std::exception {
		public:
			const char *what() const throw();
	};

};

std::ostream	&operator<<(std::ostream &stream, const Form &model);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:06:58 by andefern          #+#    #+#             */
/*   Updated: 2025/08/06 12:34:48 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <fstream>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const 						std::string	name;
	bool						isSigned;
	const unsigned int			signGrade;
	const unsigned int			executeGrade;

protected:
	void	checkExec(Bureaucrat const & executor) const;

public:
	AForm();
	AForm(std::string name, int signGrade, int executeGrade);
	AForm(const AForm &copy);
	AForm &operator= (const AForm &other);
	virtual 
	~AForm();

	std::string		getName(void) const;
	bool			getSigned(void) const;
	unsigned int	getSignGrade(void) const;
	unsigned int	getExecuteGrade(void) const;

	void		beSigned(const Bureaucrat &bureaucrat);

	virtual void	execute(Bureaucrat const & executor) const = 0;

	class	GradeTooHighException: public std::exception {
		public:
			const char *what() const throw();
	};
	class	GradeTooLowException: public std::exception {
		public:
			const char *what() const throw();
	};
	class	NotSignedException : public std::exception {
		public:
			const char *what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &stream, const AForm &model);

#endif
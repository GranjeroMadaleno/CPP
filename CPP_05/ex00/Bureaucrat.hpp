/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:37:15 by andefern          #+#    #+#             */
/*   Updated: 2025/08/04 11:15:56 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
private:
	const std::string	name;
	unsigned int		grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, unsigned int grade);
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat &operator= (const Bureaucrat &other);
	~Bureaucrat();

	class	GradeTooHighException: public std::exception {
		public:
			const char *what() const throw();
	};
	class	GradeTooLowException: public std::exception {
		public:
			const char *what() const throw();
	};

	std::string		getName(void) const;
	unsigned int	getGrade(void) const;

	void		incrementGrade(void);
	void		decrementGrade(void);
};

std::ostream	&operator<<(std::ostream &_ostream, const Bureaucrat &_bureaucrat);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:35:56 by andefern          #+#    #+#             */
/*   Updated: 2025/08/04 11:01:42 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Bureaucrat
{
	
	private:
		const std::string 	pname;
		unsigned int		pgrade;
	
		
	public:
		Bureaucrat();
		Bureaucrat(std::string pname, unsigned int grade);
		Bureaucrat(const Bureaucrat &clone);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();
		
		std::string		getName(void) const;
		unsigned int	getGrade(void) const;

		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw() {
					return ("Grade too low");
				}
			};
		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw() {
					return ("Grade too high");
				}
			};
			
		void	gradeIncrement();
		void	gradeDecrement();

		void		signForm(Form &form) const;
	
};

std::ostream	&operator<<(std::ostream &_ostream, const Bureaucrat &bureaucrat);

#endif

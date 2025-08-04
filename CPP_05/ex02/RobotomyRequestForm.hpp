/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:11:50 by andefern          #+#    #+#             */
/*   Updated: 2025/08/04 11:11:52 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <time.h>

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string	target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	RobotomyRequestForm &operator= (const RobotomyRequestForm &other);
	virtual ~RobotomyRequestForm();

	std::string		getTarget(void) const;

	void	execute(Bureaucrat const & executor) const;
};

std::ostream	&operator<<(std::ostream &stream, const AForm &model);

#endif
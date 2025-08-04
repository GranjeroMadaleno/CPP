/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 11:35:11 by andefern          #+#    #+#             */
/*   Updated: 2025/08/04 10:58:20 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat  juanjo("juanjo", 44);
    Bureaucrat  felipe("juanjo", 70);
    Form        a32("a32", 60, 15);
    std::cout << juanjo << std::endl;
    std::cout << felipe << std::endl;
    std::cout << a32 << std::endl;
    try
    {
        Form    a34("a34", 75, 25);
        a32.beSigned(felipe);
        a34.beSigned(felipe);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    juanjo.signForm(a32);
    return (0);
}

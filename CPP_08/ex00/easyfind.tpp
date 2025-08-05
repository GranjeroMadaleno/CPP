/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andefern <andefern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:25:14 by andefern          #+#    #+#             */
/*   Updated: 2025/08/05 12:44:43 by andefern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
bool	easyfind(T& cont, int n) {
	typename T::iterator iter;

	for (iter = cont.begin(); iter != cont.end(); ++iter) {
		if (*iter == n)
			return true;
	}
	return false;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhsin <muhsin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 17:27:00 by mkulbak           #+#    #+#             */
/*   Updated: 2025/11/22 22:55:20 by muhsin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type)
{
	_type = type;
};

Weapon::~Weapon()
{
	
};

const std::string&	Weapon::getType() const
{
	return _type;
}

void	Weapon::setType(const std::string& type)
{
	_type = type;
}

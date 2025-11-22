/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulbak <mkulbak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 17:27:00 by mkulbak           #+#    #+#             */
/*   Updated: 2025/11/22 18:15:27 by mkulbak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

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

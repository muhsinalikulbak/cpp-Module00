/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulbak <mkulbak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:45:11 by mkulbak           #+#    #+#             */
/*   Updated: 2025/11/18 22:14:12 by mkulbak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{

};

Zombie::~Zombie()
{
	std::cout << _name << ": Destroyed" << std::endl;
}

void    Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ.." << std::endl;
}

std::string Zombie::getName() const
{
	return _name;
}

void    Zombie::setName(const std::string& name)
{
	_name = name;
}

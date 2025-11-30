/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhsin <muhsin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 23:38:00 by muhsin            #+#    #+#             */
/*   Updated: 2025/11/29 01:11:45 by muhsin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>

HumanB::HumanB(const std::string& name) : _weapon(NULL)
{
    _name = name;
}

HumanB::~HumanB() {}

const std::string&  HumanB::getName() const
{
    return _name;
}

void    HumanB::setName(const std::string& name)
{
    _name = name;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}

Weapon HumanB::getWeapon() const
{
    return *_weapon;
}

void    HumanB::attack()
{
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulbak <mkulbak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 17:32:38 by mkulbak           #+#    #+#             */
/*   Updated: 2025/11/22 18:26:19 by mkulbak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string& name, const std::string& type)
{
    Weapon  weapon;

    _name = name;
    weapon.setType(type);
};

HumanA::~HumanA()
{

};
void    HumanA::Attack()
{
    std::cout << _name << " attacks with their " << weapon.getType() << std::endl;
}

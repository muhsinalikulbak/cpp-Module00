/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulbak <mkulbak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:45:06 by mkulbak           #+#    #+#             */
/*   Updated: 2025/11/18 22:07:28 by mkulbak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void		randomChump(std::string name)
{
	Zombie*	zombie = new Zombie();
	zombie->setName(name);
	zombie->announce();
}
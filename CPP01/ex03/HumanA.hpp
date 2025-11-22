/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulbak <mkulbak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:11:35 by mkulbak           #+#    #+#             */
/*   Updated: 2025/11/22 18:23:46 by mkulbak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_A
#define HUMAN_A

#include <string>
#include "Weapon.hpp"

class HumanA
{
private:

	std::string _name;
	
public:

	HumanA(const std::string& name, const std::string& type);
	~HumanA();
	void	Attack();
	Weapon  weapon;
	
};



#endif
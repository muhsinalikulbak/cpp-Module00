/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhsin <muhsin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:11:35 by mkulbak           #+#    #+#             */
/*   Updated: 2025/11/23 00:30:19 by muhsin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_A
#define HUMAN_A

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:

	std::string _name;
	Weapon&  _weapon;
	
public:

	HumanA(const std::string& name, Weapon& weapon);
	~HumanA();
	const std::string&	getName() const;
	void				setName(const std::string& name);
	void				attack();
};



#endif
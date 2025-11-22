/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhsin <muhsin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 17:20:23 by mkulbak           #+#    #+#             */
/*   Updated: 2025/11/22 23:50:11 by muhsin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon
{
private:

	std::string _type;

public:

	Weapon(const std::string& type);
	~Weapon();

	const std::string&	getType() const;
	void				setType(const std::string& type);
};

#endif
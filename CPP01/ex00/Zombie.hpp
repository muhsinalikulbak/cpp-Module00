/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulbak <mkulbak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 16:45:13 by mkulbak           #+#    #+#             */
/*   Updated: 2025/11/18 22:12:42 by mkulbak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	~Zombie();

	void		announce(void);
	std::string	getName() const;
	void		setName(const std::string& name);
};

// Global functions
Zombie*		newZombie( std::string name );
void		randomChump( std::string name );

#endif
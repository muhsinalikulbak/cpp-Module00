/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhsin <muhsin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 01:04:47 by muhsin            #+#    #+#             */
/*   Updated: 2025/11/11 00:53:52 by muhsin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/********************/
/* Setter Functions */
/********************/

void	Contact::setFirstName(const std::string& firstName)
{
	_firstName = firstName;
}

void	Contact::setLastName(const std::string& lastName)
{
	_lastName = lastName;
}

void	Contact::setNickName(const std::string& nickName)
{
	_nickName = nickName;
}

void	Contact::setPhoneNumber(const std::string& phoneNumber)
{
	_phoneNumber = phoneNumber;
}

void	Contact::setDarkSecret(const std::string& darkSecret)
{
	_darkSecret = darkSecret;
}

/********************/
/* Getter Functions */
/********************/

std::string	Contact::getFirstName()
{
	return _firstName;
}

std::string	Contact::getLastName()
{
	return _lastName;
}

std::string	Contact::getNickName()
{
	return _nickName;
}

std::string	Contact::getPhoneNumber()
{
	return _phoneNumber;
}

std::string	Contact:: getDarkSecret()
{
	return _darkSecret;
}

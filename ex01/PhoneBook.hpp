/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkulbak <mkulbak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 00:00:57 by muhsin            #+#    #+#             */
/*   Updated: 2025/11/15 19:25:01 by mkulbak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <string>
#include <cstdlib>
#include <iostream>

#define CLEAR "\033[H\033[2J\033[3J"

class PhoneBook
{
private:
	// Fields
	Contact _people[8];
	int     _nextPerson;
	int     _totalPeople;

	// Utils
	Contact	createContact();
	void	printPhoneBook();
	void	printOnePerson(int index);
	void	printOneColumn(std::string personInfo);
	int		getValidIndex();
	bool	isAllDigit(const std::string& strNumber);

public:
	PhoneBook();
	~PhoneBook();
	void	add();
	void	search();
	static std::string getLine(std::string inputMessage);
};

#endif

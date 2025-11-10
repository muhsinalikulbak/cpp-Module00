/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhsin <muhsin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 01:20:27 by muhsin            #+#    #+#             */
/*   Updated: 2025/11/11 01:27:44 by muhsin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"
# include <cstdlib>
# include <iostream>

PhoneBook::PhoneBook()
{
	_nextPerson = 0;
	_totalPeople = 0;
}

void	PhoneBook::add(const Contact& person)
{
	_people[_nextPerson] = person;
	_nextPerson = (_nextPerson + 1) % 8;
	if (_totalPeople < 8)
		_totalPeople++;
}

void	PhoneBook::search()
{
	int	index;

	if (_totalPeople == 0)
	{
		std::cout << "There is no one in the phone book yet" << std::endl;
		return ;
	}
	printPhoneBook();
	std::cout << std::endl;
	index = getValidIndex();
	printOnePerson(index);
}

int	PhoneBook::getValidIndex()
{
	std::string indexStr;
	int			len;
	long		num;
	int			i;

	while (true)
	{
		std::cout << "Please enter index : ";
		std::cin >> indexStr;
		len = indexStr.length();
		if (indexStr.empty() || len > 10)
		{
			std::cout << "\033[2J\033[1;1H";
			std::cout << "Wrong entry!" << std::endl;
			continue ;
		}
		i = 0;
		if (indexStr[i] == '+')
			i++;
		for (; i < len; i++)
		{
			if (!isdigit(indexStr[i]))
			{
				
			}
		}
				
		
		// index kontrol edilecek, yanlışsa tekrar girilecek
		// ya da çıkacak.
		// Geçerse
		// PrintOnePerson(index);
	}
}

void	PhoneBook::exit()
{
	exit(0);
}

void	PhoneBook::printPhoneBook()
{
	std::cout << "     Index|First Name| Last Name| Nick Name|Dark Secre." << std::endl;
	for (int i = 0; i < _totalPeople; i++)
	{
		std::cout << "         ";
		std::cout << i + 1;
		std::cout << '|';
		printOneColumn(_people[i].getFirstName());
		std::cout << '|';
		printOneColumn(_people[i].getLastName());
		std::cout << '|';
		printOneColumn(_people[i].getNickName());
		std::cout << std::endl;
	}
}

void	PhoneBook::printOnePerson(int index)
{
	std::cout << std::endl;
	std::cout << "         ";
	std::cout << index + 1;
	std::cout << '|';
	printOneColumn(_people[index].getFirstName());
	std::cout << '|';
	printOneColumn(_people[index].getLastName());
	std::cout << '|';
	printOneColumn(_people[index].getNickName());
	std::cout << '|';
	printOneColumn(_people[index].getPhoneNumber());
	std::cout << '|';
	printOneColumn(_people[index].getDarkSecret());
	std::cout << std::endl;
}

void	PhoneBook::printOneColumn(std::string personInfo)
{
	int			len;
	int			spaceCount;

	len = personInfo.length();
	if (len > 10)
		personInfo = personInfo.substr(0, 9) + ".";
	spaceCount = 10 - personInfo.length();
	for (int i = 0; i < spaceCount; i++)
		std::cout << ' ';
	std::cout << personInfo;
}

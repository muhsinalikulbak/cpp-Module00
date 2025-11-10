/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhsin <muhsin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 00:00:57 by muhsin            #+#    #+#             */
/*   Updated: 2025/11/11 01:22:45 by muhsin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
    // Fields
    Contact _people[8];
    int     _nextPerson;
    int     _totalPeople;

public:
    // Functions
    PhoneBook();
    void    add(const Contact& person);
    void    search();
    void    exit();
    void    printPhoneBook();
    void    printOnePerson(int index);
    void    printOneColumn(std::string personInfo);
    int     getValidIndex();
};

#endif

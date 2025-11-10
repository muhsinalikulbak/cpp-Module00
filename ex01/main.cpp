/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhsin <muhsin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 00:25:46 by muhsin            #+#    #+#             */
/*   Updated: 2025/11/11 01:22:07 by muhsin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Contact.hpp"
# include "PhoneBook.hpp"

std::string toLower(std::string& str)
{

}

Contact createContact()
{
    Contact     contact;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkSecret;

    while (true)
    {
        /* code */
    }
    
}

int main()
{
    std::string input;
    PhoneBook   phoneBook;

    while (true)
    {
        std::cout << "Please enter input : ";
        std::cin >> input;

        input = toLower(input);
        if (input == "search")
            phoneBook.search();
        else if (input == "add")
        {
            phoneBook.add(createContact());
        }
        else if (input == "exit")
            phoneBook.exit();
        else
        {
            std::cout << "\033[2J\033[1;1H";
            std::cout << "Please enter one of the add, search or exit options" << std::endl;
            std::cout << "--" << std::endl;
        }
    }
}

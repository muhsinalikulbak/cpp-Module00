/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhsin <muhsin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:35:53 by mkulbak           #+#    #+#             */
/*   Updated: 2025/11/26 23:08:32 by muhsin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

static bool	argvChecker(int argc, char const *argv[])
{
	if (argc != 4)
	{
		std::cout << "Invalid argument" << std::endl;
		return (false);
	}
	std::ifstream	file(argv[1]);
	if (!file.is_open())
	{
		if (errno == EACCES)
			std::cout << "Permission Denied" << std::endl;
		else if (errno == ENOENT)
			std::cout << "No such file or directory" << std::endl;
		return (false);
	}
	return (true);
}

int main(int argc, char const *argv[])
{
	if (!argvChecker(argc, argv))
		return (1);
	
	Replace::fileReplacer(argv[1], argv[2], argv[3]);

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 12:26:18 by abelayad          #+#    #+#             */
/*   Updated: 2023/10/14 11:55:31 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	PhoneBook	pbook;
	std::string	tmpS;

	std::cout << ">>> Enter a command[ADD, SEARCH, EXIT]:" << std::endl;
	while (std::cin >> tmpS)
	{
		if ("ADD" == tmpS)
			pbook.add();
		else if ("SEARCH" == tmpS)
			pbook.search();
		else if ("EXIT" == tmpS)
			pbook.exit();
		std::cout << std::endl << ">>> Enter a command[ADD, SEARCH, EXIT]:" << std::endl;
	}
}

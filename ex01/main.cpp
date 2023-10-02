/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 12:26:18 by abelayad          #+#    #+#             */
/*   Updated: 2023/10/01 17:30:16 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

class	Contact
{
public:
	std::string	m_firstName;
	std::string	m_lastName;
	std::string	m_nickName;
	std::string	m_phoneNumber;
	std::string	m_darkestSecret;
};

class	PhoneBook
{
private:
	int						m_contact_count;
	std::vector<Contact>	m_contacts;
	std::string	m_truncateStr(const std::string &str)
	{
		std::string	tmpS;
		
		if (str.length() < 10)
			return (str);
		tmpS = str.substr(0, 10);
		tmpS[9] = '.';
		return (tmpS);
	}

public:
	PhoneBook(): m_contacts(2)
	{
		m_contact_count = 0;
	}
	void	add(void)
	{
		std::cout << "Enter First Name:" << std::endl;
		std::cin >> m_contacts[m_contact_count % 2].m_firstName;
		std::cout << "Enter Last Name:" << std::endl;
		std::cin >> m_contacts[m_contact_count % 2].m_lastName;
		std::cout << "Enter Nick Name:" << std::endl;
		std::cin >> m_contacts[m_contact_count % 2].m_nickName;
		std::cout << "Enter Phone Number:" << std::endl;
		std::cin >> m_contacts[m_contact_count % 2].m_phoneNumber;
		std::cout << "Enter The Darkest Secret:" << std::endl;
		std::cin >> m_contacts[m_contact_count % 2].m_darkestSecret;
		m_contact_count++;
	}

	void	search(void)
	{
		int			i;

		for (int i = 0; i < m_contacts.size(); i++)
		{
			std::cout << std::right << std::setw(10) << i;
			std::cout << " | ";
			std::cout << std::right << std::setw(10) << m_truncateStr(m_contacts[i].m_firstName);
			std::cout << " | ";
			std::cout << std::right << std::setw(10) << m_truncateStr(m_contacts[i].m_lastName);
			std::cout << " | ";
			std::cout << std::right << std::setw(10) << m_truncateStr(m_contacts[i].m_nickName) << std::endl;
		}
		std::cout << "Enter The Index Of The Contact You Want To See:" << std::endl;
		if (!(std::cin >> i))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Not a valid index" << std::endl;
			return ;
		}
		if (!(i >= 0 && i <= 7))
		{
			std::cout << "Wrong index range" << std::endl;
			return ;
		}
		std::cout << "i is: " << i << std::endl;
		std::cout << m_contacts[i].m_firstName << std::endl;
		std::cout << m_contacts[i].m_lastName << std::endl;
		std::cout << m_contacts[i].m_nickName << std::endl;
	}

	void	exit(void)
	{
		std::exit(69);
	}
};

int main()
{
	PhoneBook	pbook;
	std::string	tmpS;

	std::cout << ">>> Enter a command:" << std::endl;
	while (std::cin >> tmpS)
	{
		if (tmpS.compare("ADD") == 0)
			pbook.add();
		else if (tmpS.compare("SEARCH") == 0)
			pbook.search();
		else if (tmpS.compare("EXIT") == 0)
			pbook.exit();
		std::cout << std::endl << ">>> Enter a command:" << std::endl;
	}

}
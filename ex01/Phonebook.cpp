#include "Phonebook.hpp"

std::string	PhoneBook::m_truncateStr(const std::string &str)
{
	std::string	tmpS;
	
	if (str.length() < 10)
		return (str);
	tmpS = str.substr(0, 10);
	tmpS[9] = '.';
	return (tmpS);
}

PhoneBook::PhoneBook() : m_contacts_count(0) {}
	
void	PhoneBook::add()
{
	std::string	tmpS;

	std::cout << "Enter First Name:" << std::endl;
	std::cin >> tmpS;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	m_contacts[m_contacts_count % 8].setFirstName(tmpS);
	std::cout << "Enter Last Name:" << std::endl;
	std::cin >> tmpS;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	m_contacts[m_contacts_count % 8].setLastName(tmpS);
	std::cout << "Enter Nick Name:" << std::endl;
	std::cin >> tmpS;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	m_contacts[m_contacts_count % 8].setNickName(tmpS);
	std::cout << "Enter Phone Number:" << std::endl;
	std::cin >> tmpS;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	m_contacts[m_contacts_count % 8].setPhoneNumber(tmpS);
	std::cout << "Enter The Darkest Secret:" << std::endl;
	std::cin >> tmpS;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	m_contacts[m_contacts_count % 8].setDarkestSecret(tmpS);
	m_contacts_count += (m_contacts_count < 8);
}

void	PhoneBook::search()
{
	int	i;

	for (int i = 0; i < m_contacts_count; i++)
	{
		std::cout << std::right << std::setw(10) << i;
		std::cout << " | ";
		std::cout << std::right << std::setw(10) << m_truncateStr(m_contacts[i].getFirstName());
		std::cout << " | ";
		std::cout << std::right << std::setw(10) << m_truncateStr(m_contacts[i].getLastName());
		std::cout << " | ";
		std::cout << std::right << std::setw(10) << m_truncateStr(m_contacts[i].getNickName()) << std::endl;
	}
	std::cout << "Enter The Index Of The Contact You Want To See:" << std::endl;
	if (!(std::cin >> i))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Not a valid index" << std::endl;
	}
	else if (!(i >= 0 && i <= 7))
		std::cout << "Wrong index range" << std::endl;
	else
	{
		std::cout << m_contacts[i].getFirstName() << std::endl;
		std::cout << m_contacts[i].getLastName() << std::endl;
		std::cout << m_contacts[i].getNickName() << std::endl;
		std::cout << m_contacts[i].getPhoneNumber() << std::endl;
		std::cout << m_contacts[i].getDarkestSecret() << std::endl;
	}
}

void	PhoneBook::exit(void)
{
	std::exit(0);
}

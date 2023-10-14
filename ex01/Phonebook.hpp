#pragma once

#include "Contact.hpp"

class	PhoneBook
{
private:
	int			m_contacts_count;
	Contact		m_contacts[8];
	std::string	m_truncateStr(const std::string &str);
public:
	PhoneBook();
	void	add(void);
	void	search(void);
	void	exit(void);
};

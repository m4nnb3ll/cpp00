#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class	Contact
{
public:
	void				setFirstName(std::string str);
	void				setLastName(std::string str);
	void				setNickName(std::string str);
	void				setPhoneNumber(std::string str);
	void				setDarkestSecret(std::string str);
	const std::string&	getFirstName();
	const std::string&	getLastName();
	const std::string&	getNickName();
	const std::string&	getPhoneNumber();
	const std::string&	getDarkestSecret();
private:
	std::string	m_firstName;
	std::string	m_lastName;
	std::string	m_nickName;
	std::string	m_phoneNumber;
	std::string	m_darkestSecret;
};

#include "Contact.hpp"

void	Contact::setFirstName(std::string str)
{
	m_firstName = str;
}

void	Contact::setLastName(std::string str)
{
	m_lastName = str;
}

void	Contact::setNickName(std::string str)
{
	m_nickName = str;
}

void	Contact::setPhoneNumber(std::string str)
{
	m_phoneNumber = str;
}

void	Contact::setDarkestSecret(std::string str)
{
	m_darkestSecret = str;
}

const std::string&	Contact::getFirstName()
{
	return (m_firstName);
}
const std::string&	Contact::getLastName()
{
	return (m_lastName);
}
const std::string&	Contact::getNickName()
{
	return (m_nickName);
}
const std::string&	Contact::getPhoneNumber()
{
	return (m_phoneNumber);
}
const std::string&	Contact::getDarkestSecret()
{
	return (m_darkestSecret);
}
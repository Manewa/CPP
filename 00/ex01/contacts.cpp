#include "contacts.class.hpp"
#include <string>

contacts::contacts(void) {}
contacts::~contacts(void) {}

void	contacts::setFirstName(const std::string &buffer) { this->_First_Name = buffer; }
void	contacts::setLastName(const std::string &buffer) { this->_Last_Name = buffer; }
void	contacts::setNickname(const std::string &buffer) { this->_Nickname = buffer; }
void	contacts::setPhoneNumber(const std::string &buffer) { this->_Phone_Number = buffer; }
void	contacts::setSecret(const std::string &buffer) { this->_Secret = buffer; }

	std::string	contacts::getFirstName(void) const { return _First_Name; }
	std::string	contacts::getLastName(void) const { return _Last_Name; }
	std::string	contacts::getNickname(void) const { return _Nickname; }
	std::string	contacts::getPhoneNumber(void) const { return _Phone_Number; }
	std::string	contacts::getSecret(void) const { return _Secret; }

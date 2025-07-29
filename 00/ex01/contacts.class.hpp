#ifndef CONTACTS_CLASS_H
# define CONTACTS_CLASS_H

#include <string>

class contacts	{

	public:
		
	contacts(void);
	~contacts(void);

	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickname(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getSecret(void) const;

		void	setFirstName(std::string const &buffer);
		void	setLastName(std::string const &buffer);
		void	setNickname(std::string const &buffer);
		void	setPhoneNumber(std::string const &buffer);
		void	setSecret(std::string const &buffer);

	private:

	std::string	_First_Name;
	std::string	_Last_Name;
	std::string	_Nickname;
	std::string	_Phone_Number;
	std::string	_Secret;
};

#endif

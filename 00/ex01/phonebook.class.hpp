#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "contacts.class.hpp"

class phonebook {

public:

	phonebook(void);
	~phonebook(void);

	void	Add(void);
	void	Search(void);
	void	Ex(void);

private:

//	typedef enum {
//		FIRST_NAME, LAST_NAME, NICKNAME, PHONE_NUMBER, SECRET} _Info;

	contacts	_Dir[8];
	int			_Iterator;

};

#endif

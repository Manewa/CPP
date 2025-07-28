#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class phonebook {

public:

	phonebook(void);
	~phonebook(void);

	Add(void);
	Search(void);
	Ex(void);

private:

//	typedef enum {
//		FIRST_NAME, LAST_NAME, NICKNAME, PHONE_NUMBER, SECRET} _Info;

	contacts	_Dir[8];
	int			_Iterator;

};

#endif

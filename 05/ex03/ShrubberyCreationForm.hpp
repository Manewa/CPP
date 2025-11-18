#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "AForm.hpp"


#define TREE "\
          .     .  .      +     .      .          .\n\
     .       .      .     #       .           .\n\
        .      .         ###            .      .      .\n\
      .      .   '#:. .:##'##:. .:#'  .      .\n\
          .      . '####'###'####'  .\n\
       .     '#:.    .:#'###'#:.    .:#'  .        .       .\n\
  .             '#########'#########'        .        .\n\
        .    '#:.  '####'###'####'  .:#'   .       .\n\
     .     .  '#######''##'##''#######'                  .\n\
                .'##'#####'#####'##'           .      .\n\
    .   '#:. ...  .:##'###'###'##:.  ... .:#'     .\n\
      .     '#######'##'#####'##'#######'      .     .\n\
    .    .     '#####''#######''#####'    .      .\n\
            .     '      000      '    .     .\n\
       .         .   .   000     .        .       .\n\
.. .. ..................O000O........................ ......\n\
"

class ShrubberyCreationForm : public AForm {

public:

			ShrubberyCreationForm();
			ShrubberyCreationForm(std::string target);
			ShrubberyCreationForm(const ShrubberyCreationForm& other);
			ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
			~ShrubberyCreationForm();

protected:
		
			void	executeCForm() const;

private:

			std::string	_target;
		
};

#endif

